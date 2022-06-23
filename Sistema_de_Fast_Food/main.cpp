#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    char nome[30],

    //Pizzas
    piz1[] ="Mussarela",
    piz2[] ="Calabresa",
    piz3[] ="Peperoni",
    piz4[] ="Frango Catupiry",
    //Bebidas
    bebida1[]="Refrigerante",
    bebida2[]="Água",
    bebida3[]="Suco Natural",
    //Hamburgueres
    burguer_1[]="X-Burguer",
    burguer_2[]="X-Salada",
    burguer_3[]="X-Tudo";
    //Lanches
    char lanche_1[]="Beirute",
    lanche_2[]="Pão na Chapa",
    lanche_3[]="Misto Quente";
    char fritas_1[]="Frango Frito",
    fritas_2[]="Batata Frita",
    fritas_3[]="Onion Rings",
    gotobeginning;

    int opcao = 0, pizzaopcao,pizzaopcao1,quant;// Time = 40;
    starting:
      system("cls");
      cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|              SISTEMA DE PEDIDOS DE FAST FOOD        |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	  cout<<"Por favor, digite o seu nome: ";
	  cin.getline(nome,20);
	  cout<<"\n \t\t\t Olá "<<nome<<", o que gostaria de pedir?\n\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|                      CARDÁPIO                   |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";

      cout<<"\n \t\t\t 1. Pizzas\n";
	  cout<<"\n \t\t\t 2. Hambúrgueres\n";
	  cout<<"\n \t\t\t 3. Lanches\n";
	  cout<<"\n \t\t\t 4. Bebidas\n";
	  cout<<"\n \t\t\t 5. Frituras\n\n";
	  cout<<"\n \t\t\t Selecione um menu :=> ";
	  cin>>opcao;

	  if(opcao==1)
      {
        cout<<"\n \t\t\t 1. "<<piz1<<"\n";
        cout<<"\n \t\t\t 2. "<<piz2<<"\n";
        cout<<"\n \t\t\t 3. "<<piz3<<"\n";
        cout<<"\n \t\t\t 4. "<<piz4<<"\n";
        cout<<"\n \t\t\t Qual o sabor gostaria de pedir?: ";
        cin>>pizzaopcao;
        if(pizzaopcao>=1&&pizzaopcao<=5)
        {
            cout<<"\n \t\t\t === Tamanho ===\n";
            cout<<"\n \t\t\t 1. Individual R$21.00";
            cout<<"\n \t\t\t 2. Normal     R$36.00";
            cout<<"\n \t\t\t 3. Família    R$45.00";
            cout<<"\n \t\t\t Selecione o tamanho : ";
            cin>>pizzaopcao1;
            if(pizzaopcao1>=1&&pizzaopcao1<=3)
            {
                cout<<"\n \t\t\t === Quantidade ===\n";
                cout<<"\n \t\t\t Selecione a quantidade: ";
                cin>>quant;
                switch(pizzaopcao1)
                {
                 case 1:
                 opcao = 21*quant;
                 break;
                 case 2:
                 opcao = 36*quant;
                 break;
                 case 3:
                 opcao = 45*quant;
                 break;

                }
                system("cls");
                switch(pizzaopcao1)
                {
                 case 1:
                 cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
			     cout<<""<<quant<<" "<<piz1;
			     cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
			     cout<<"\n\nObrigado por escolher nossos serviços!\n";
			     break;


                }

            }

        }
      }




}
