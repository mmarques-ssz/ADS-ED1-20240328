#include <iostream>
#include <locale.h>
using namespace std;

struct data {
	int dia;
	int mes;
	int ano;
};

void cria_data(data *d, int dia, int mes, int ano)
{
    d->dia = dia;
	d->mes = mes;
	d->ano = ano;	
}

void mostra_data(data *d)
{
    cout << d->dia << "/"  
	     << d->mes << "/"
	     << d->ano << endl;	
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	cria_data(&hoje, 28, 3, 2024);
	mostra_data(&hoje);
	hoje.dia++;
	mostra_data(&hoje);

	return 0;
}