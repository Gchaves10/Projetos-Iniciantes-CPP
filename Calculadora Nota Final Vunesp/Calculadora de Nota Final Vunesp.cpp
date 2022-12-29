#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	
	//Definindo variaveis
	float acertos,acertos2,red,nf,enem1,enem;
	long double n1,n2;
	
	cout<<"\n\t Digite seu número de acertos na Primeira Fase Vestibular Vunesp: ";
	cin>>acertos;
	
	if(acertos<=90)
	{
	  //Inicializando cálculos
	  n1 = (acertos*100)/90;
	  cout<<"\n\t Sua nota da primeira fase é: "<<n1;
	
	}
	else
	{
		cout<<"\n Nota não corresponde!";
	}

    cout<<"\n\t Digite seu número de acertos na Segunda Fase Vestibular Vunesp: ";
	cin>>acertos2;
	//Segunda fase
	if(acertos<=60)
	{
		//Inicializando cálculos
	    n2 = acertos2*1.2;
	    cout<<"\n\t Sua nota da segunda fase é: "<<n2;	
	}
	else
	{
		cout<<"\n Nota não corresponde!";
	}
	cout<<"\n \t Insira sua nota da Redação (0-28): ";
	cin>>red;
	
	//Média Final
	nf = (n1+n2+red)/2;
	
	if(nf<=100)
	{
		cout<<"\n \t Sua nota final é: "<<nf;
	}
	//Enem
	cout<<"\n\t Digite seu número de acertos do enem: ";
	cin>>enem1;
	
	enem =enem1/2;
	if(enem1>n1)
	{
		nf =((4*n1)+(1*enem))/5;
		cout<<"\n\t Sua nota final é: "<<nf;
	}
	if (enem<=n1)
	{
		nf=n1;
		cout<<"\n Sua nota final é: "<<nf;
	}
	
	cout<<"\n\n";
	system("pause");
	
	return 0;
}


