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
	hoje.dia = 28;
	hoje.mes = 3;
	hoje.ano = 2024;
	
	cout << "Hoje é " << hoje.dia << "/" 
	                  << hoje.mes << "/"
	                  << hoje.ano << endl;
	
	return 0;
}