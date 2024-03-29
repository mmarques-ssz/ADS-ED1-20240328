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

string gera_data(data *d)
{
	string sDia = to_string(d->dia);
    string sMes = to_string(d->mes);
    string sAno = to_string(d->ano);
    
    return sDia.insert(0, 2-sDia.size(),'0') + "/" +
           sMes.insert(0, 2-sMes.size(),'0') + "/" +
	       sAno;
}

data dia_seguinte(data d)
{
	int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};;
	if (d.ano%4==0)
	{
		diasNoMes[1] = 29;
	} 
	d.dia++;
	if (d.dia>diasNoMes[d.mes-1])
	{
		d.dia=1;
		d.mes++;
		if(d.mes>12)
		{
			d.mes=1;
			d.ano++;
		}
	}
	return d;
}

#define qtDias 300

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	data amanha;
	cria_data(&hoje, 28, 3, 2024);
	cout << "Hoje é " << gera_data(&hoje) << endl;
	
	amanha = dia_seguinte(hoje);
	cout << "Amanhã será " << gera_data(&amanha) << endl;
	
	data diasDeAbril[qtDias];
	cria_data(&diasDeAbril[0],1,4,2024);
	
	for(int i=1; i<qtDias; i++)
	{
	   diasDeAbril[i]=dia_seguinte(diasDeAbril[i-1]);	
	}
	
	for(int i=0; i<qtDias; ++i)
	{
		cout << gera_data(&diasDeAbril[i]) << endl;
	}

	return 0;
}