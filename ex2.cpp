#include <iostream>
#include <locale.h>
using namespace std;

struct data {
	int dia;
	int mes;
	int ano;
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	data *phoje;
	
	hoje.dia = 28;
	hoje.mes = 3;
	hoje.ano = 2024;
	
	cout << "Hoje � " << hoje.dia << "/" 
	                  << hoje.mes << "/"
	                  << hoje.ano << endl;

    phoje = &hoje;
    cout << "Hoje � " << (*phoje).dia << "/" 
	                  << (*phoje).mes << "/"
	                  << (*phoje).ano << endl;
	                  
    cout << "Hoje � " << phoje->dia << "/"   
	                  << phoje->mes << "/"
	                  << phoje->ano << endl;
    
    
	
	return 0;
}