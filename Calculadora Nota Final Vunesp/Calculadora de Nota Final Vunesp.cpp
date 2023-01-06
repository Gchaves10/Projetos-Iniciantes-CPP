#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	
	//Definindo variaveis
	char nome[30];
	char reseta;
	float acertos,acertos2,red,aux2,mf,enem1,enem,nf;
	float cg,cg2,auxcg;
	int op;
	char enemop;
	
	while(1)
	{
	  system ("cls");
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|              CALCULADORA DE VESTIBULARES              |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	  cout<<"\n \t\t\t Por favor, digite o seu nome: ";
	  cin.getline(nome,20);
	  cout<<"\n \t\t\t Olá "<<nome<<", bem-vindo(a) ao menu de opções da calculadora do vestibular Unesp.\n\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|                      OPÇÕES                           |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";

      cout<<"\n \t\t\t 1. ACERTOS NA SEGUNDA FASE BASEADO NO ANO ANTERIOR\n";
	  cout<<"\n \t\t\t 2. NOTA DE REDAÇÃO BASEADO NO ANO ANTERIOR \n";
	  cout<<"\n \t\t\t 3. MÉDIA FINAL          \n";
	
	  //Solicitando ao usuário
	  cout<<"\n \t\t\t O que deseja saber?:=> ";
	  cin>>op;
	  switch(op)
	  {
	  /* ACERTOS SEGUNDA FASE */
	  case 1:
	  reseta = 'N';
	  while(reseta == 'N'||reseta=='n')
	  {
	  system("cls");
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
      cout<<"\t\t\t|                ACERTOS SEGUNDA FASE                   |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
      cout<<"\n\t Digite seu número de acertos na Primeira Fase Vestibular Vunesp: ";
	  cin>>acertos;
	  cg = (acertos*100)/90;
	  cout<<"\n \t Insira a nota da Redação desejada (0-28): ";
	  cin>>red;
	  cout<<"\n \t Insira a média final do ano anterior: ";
	  cin>>mf;
	  
	  aux2 = cg - red;
	  cg2 =mf+mf-cg-red;
	  
	  acertos2= cg2/1.2;
	  
	  cout<<fixed<<showpoint;
	  cout<<"\n \t\t Para a quantidade desejada, o número de acertos na segunda fase deve ser: "<<setprecision(0)<<acertos2;
	  cout<<"\n\t Deseja realizar outro cálculo da nota da UNESP?";
	  cin>>reseta;
	  }
	  break;
	  case 2:
	  reseta = 'N';
	  while(reseta == 'N'||reseta=='n')
	  {
	  system("cls");
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
      cout<<"\t\t\t|                NOTA REDAÇÃO                           |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
      cout<<"\n\t Digite seu número de acertos na Primeira Fase Vestibular Vunesp: ";
	  cin>>acertos;
	  cg = (acertos*100)/90;
	  cout<<"\n\t Digite seu número de acertos na Segunda Fase Vestibular Vunesp: ";
	  cin>>acertos2;
	  cg2= acertos2*1.2;
	  cout<<"\n \t Insira a média final do ano anterior: ";
	  cin>>mf;
	  
	  red =mf+mf-cg-cg2;
	  
	  
	  
	  cout<<fixed<<showpoint;
	  cout<<"\n \t\t Para a quantidade desejada,  a nota de redação na segunda fase deve ser: "<<setprecision(3)<<red;
	  cout<<"\n \t\t Deseja realizar outro cálculo da nota da UNESP?";
	  cin>>reseta;
	  }
	  break;
	  /* UNESP */
	  case 3:
	  reseta = 'N';
	  while(reseta == 'N'||reseta=='n')
	  {
	  system("cls");
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|                      MÉDIA FINAL                      |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
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
	  cout<<"\n\n";
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
	  cout<<"\n\t Sua nota final da primeira fase com ENEM é: "<<cg;
	  }	
	   }
	 cout<<"\n";
	 cout<<"\n\t ======= SEGUNDA FASE =======\n";
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
     cout<<"\n";
	 cout<<"\n\t ======= MÉDIA FINAL  =======\n";
	 cout<<"\n \t Sua Média final do vestibular UNESP é: "<<mf;
	 cout<<"\n \t\t Deseja realizar outro cálculo da nota da UNESP?";
	 cin>>reseta;
	 }

	  
	  }
	  		  	      				
    }
    }
	
	

	return 0;
}


