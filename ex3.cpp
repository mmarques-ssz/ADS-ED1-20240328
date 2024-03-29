#include <iostream>
#include <locale.h>
using namespace std;

struct data {
	int dia;
	int mes;
	int ano;
};

void mostra_data1(data d)
{
    cout << d.dia << "/"  
	     << d.mes << "/"
	     << d.ano << endl;	
}

void mostra_data2(data &d)
{
    cout << d.dia << "/"  
	     << d.mes << "/"
	     << d.ano << endl;	
}

void mostra_data3(data *d)
{
    cout << d->dia << "/"  
	     << d->mes << "/"
	     << d->ano << endl;	
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	data *phoje;
	data amanha;
	
	hoje.dia = 28;
	hoje.mes = 3;
	hoje.ano = 2024;

	mostra_data1(hoje);	
	mostra_data2(hoje);

    phoje = &hoje;
    mostra_data3(&hoje);
    mostra_data3(phoje);
    
    amanha = hoje;
    amanha.dia++;
    mostra_data2(amanha);
	
	return 0;
}