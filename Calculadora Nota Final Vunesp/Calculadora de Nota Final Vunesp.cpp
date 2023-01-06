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
	float acertos,acertos2,red,mf,enem1,enem,nf;
	long double cg,cg2,auxcg;
	char enemop;
	
	cout<<"\n\t Digite seu número de acertos na Primeira Fase Vestibular Vunesp: ";
	cin>>acertos;
	
	if(acertos<=90)
	{
	  //Inicializando cálculos
	  cg = (acertos*100)/90;
	  cout<<"\n\t Sua nota da primeira fase é: "<<cg;
	
	}
	else
	{
		cout<<"\n Nota não corresponde!";
	}
	cout<<"\n\t ======= PRIMEIRA FASE =======\n";
	cout<<"\n\t Para o candidato que prestou o ENEM (Exame Nacional do Ensino Médio)";
	cout<<"\n\t o desempenho da parte objetiva desse exame poderá ser aproveitado na nota da Prova de Conhecimentos Gerais";
	cout<<"\n\t do Vestibular da Unesp.";
	cout<<"\n\t Deseja utilizar seu desempenho do ENEM? (S/N): ";
	cin>> enemop;
    if(enemop =='S'||enemop=='s')
    {
      cout<<"\n\t Digite seu número de acertos do enem: ";
	  cin>>enem;
	  
	  enem = (enem*100)/180;
	  
	    if(enem>cg)
	    {
		  auxcg =((4*cg+(1*enem))/5);
		  cout<<"\n\t Sua nota final da primeira fase com ENEM é: "<<auxcg;
		  cg = auxcg;
	    }
		else if (enem<=cg)
	    {
		   auxcg=cg;
		   cout<<"\n Sua nota final da primeira fase com ENEM é: "<<nf;
	    }	
	}
	
	cout<<"\n\t Digite seu número de acertos na Segunda Fase Vestibular Vunesp: ";
	cin>>acertos2;
	//Segunda fase
	if(acertos<=60)
	{
		//Inicializando cálculos
	    cg2 = acertos2*1.2;
	    cout<<"\n\t Sua nota da segunda fase é: "<<cg2;	
	}
	else
	{
		cout<<"\n Nota não corresponde!";
	}
	cout<<"\n \t Insira sua nota da Redação (0-28): ";
	cin>>red;
	
	//Média Final
	mf = (cg+cg2+red)/2;
	
	if(mf<=100)
	{
		cout<<"\n \t Sua Média final do vestibular UNESP é: "<<mf;
	}
	
	cout<<"\n\n";
	system("pause");
	
	return 0;
}

