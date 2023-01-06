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
	  cout<<"\n \t\t\t Ol� "<<nome<<", bem-vindo(a) ao menu de op��es da calculadora do vestibular Unesp.\n\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|                      OP��ES                           |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";

      cout<<"\n \t\t\t 1. ACERTOS NA SEGUNDA FASE BASEADO NO ANO ANTERIOR\n";
	  cout<<"\n \t\t\t 2. NOTA DE REDA��O BASEADO NO ANO ANTERIOR \n";
	  cout<<"\n \t\t\t 3. M�DIA FINAL          \n";
	
	  //Solicitando ao usu�rio
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
      cout<<"\n\t Digite seu n�mero de acertos na Primeira Fase Vestibular Vunesp: ";
	  cin>>acertos;
	  cg = (acertos*100)/90;
	  cout<<"\n \t Insira a nota da Reda��o desejada (0-28): ";
	  cin>>red;
	  cout<<"\n \t Insira a m�dia final do ano anterior: ";
	  cin>>mf;
	  
	  aux2 = cg - red;
	  cg2 =mf+mf-cg-red;
	  
	  acertos2= cg2/1.2;
	  
	  cout<<fixed<<showpoint;
	  cout<<"\n \t\t Para a quantidade desejada, o n�mero de acertos na segunda fase deve ser: "<<setprecision(0)<<acertos2;
	  cout<<"\n\t Deseja realizar outro c�lculo da nota da UNESP?";
	  cin>>reseta;
	  }
	  break;
	  case 2:
	  reseta = 'N';
	  while(reseta == 'N'||reseta=='n')
	  {
	  system("cls");
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
      cout<<"\t\t\t|                NOTA REDA��O                           |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
      cout<<"\n\t Digite seu n�mero de acertos na Primeira Fase Vestibular Vunesp: ";
	  cin>>acertos;
	  cg = (acertos*100)/90;
	  cout<<"\n\t Digite seu n�mero de acertos na Segunda Fase Vestibular Vunesp: ";
	  cin>>acertos2;
	  cg2= acertos2*1.2;
	  cout<<"\n \t Insira a m�dia final do ano anterior: ";
	  cin>>mf;
	  
	  red =mf+mf-cg-cg2;
	  
	  
	  
	  cout<<fixed<<showpoint;
	  cout<<"\n \t\t Para a quantidade desejada,  a nota de reda��o na segunda fase deve ser: "<<setprecision(3)<<red;
	  cout<<"\n \t\t Deseja realizar outro c�lculo da nota da UNESP?";
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
	  cout<<"\t\t\t|                      M�DIA FINAL                      |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	  cout<<"\n\t Digite seu n�mero de acertos na Primeira Fase Vestibular Vunesp: ";
	  cin>>acertos;
	  if(acertos<=90)
	  {
	  //Inicializando c�lculos
	  cg = (acertos*100)/90;
	  cout<<"\n\t Sua nota da primeira fase �: "<<cg;
	  }
	  else
	  {
	   cout<<"\n Nota n�o corresponde!";
	  }
	  cout<<"\n\n";
	  cout<<"\n\t ======= PRIMEIRA FASE =======\n";
	  cout<<"\n\t Para o candidato que prestou o ENEM (Exame Nacional do Ensino M�dio)";
	  cout<<"\n\t o desempenho da parte objetiva desse exame poder� ser aproveitado na nota da Prova de Conhecimentos Gerais";
	  cout<<"\n\t do Vestibular da Unesp.";
      cout<<"\n\t Deseja utilizar seu desempenho do ENEM? (S/N): ";
	  cin>> enemop;
	  if(enemop =='S'||enemop=='s')
	  {
	  cout<<"\n\t Digite seu n�mero de acertos do enem: ";
	  cin>>enem;
	  enem = (enem*100)/180;
	  if(enem>cg)
	  {
	  auxcg =((4*cg+(1*enem))/5);
	  cout<<"\n\t Sua nota final da primeira fase com ENEM �: "<<auxcg;
	  cg = auxcg;
	  }
	  else if (enem<=cg)
	  {
	  auxcg=cg;
	  cout<<"\n\t Sua nota final da primeira fase com ENEM �: "<<cg;
	  }	
	   }
	 cout<<"\n";
	 cout<<"\n\t ======= SEGUNDA FASE =======\n";
	 cout<<"\n\t Digite seu n�mero de acertos na Segunda Fase Vestibular Vunesp: ";
	 cin>>acertos2;
	 //Segunda fase
	 if(acertos<=60)
	 {
	 //Inicializando c�lculos
	 cg2 = acertos2*1.2;
	 cout<<"\n\t Sua nota da segunda fase �: "<<cg2;
	 }
	 else
	 {
	 cout<<"\n Nota n�o corresponde!";
	 }
	 cout<<"\n \t Insira sua nota da Reda��o (0-28): ";
	 cin>>red;
	 //M�dia Final
	 mf = (cg+cg2+red)/2;
	 if(mf<=100)
	 {
     cout<<"\n";
	 cout<<"\n\t ======= M�DIA FINAL  =======\n";
	 cout<<"\n \t Sua M�dia final do vestibular UNESP �: "<<mf;
	 cout<<"\n \t\t Deseja realizar outro c�lculo da nota da UNESP?";
	 cin>>reseta;
	 }

	  
	  }
	  		  	      				
    }
    }
	
	

	return 0;
}


