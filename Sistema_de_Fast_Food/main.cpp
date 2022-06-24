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
	  cout<<"\t\t\t|              SISTEMA DE PEDIDOS DE FAST FOOD          |\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	  cout<<"Por favor, digite o seu nome: ";
	  cin.getline(nome,20);
	  cout<<"\n \t\t\t Olá "<<nome<<", o que gostaria de pedir?\n\n";
	  cout<<"\t\t\t|-------------------------------------------------------|\n";
	  cout<<"\t\t\t|                      CARDÁPIO                         |\n";
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
        system("cls");
        cout<<"\t\t\t|-------------------------------------------------------|\n";
	    cout<<"\t\t\t|                      PIZZAS                           |\n";
	    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
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
			     case 2:
                 cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
			     cout<<""<<quant<<" "<<piz2;
			     cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
			     cout<<"\n\nObrigado por escolher nossos serviços!\n";
			     break;
			     case 3:
                 cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
			     cout<<""<<quant<<" "<<piz3;
			     cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
			     cout<<"\n\nObrigado por escolher nossos serviços!\n";
			     break;
			     case 4:
                 cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
			     cout<<""<<quant<<" "<<piz4;
			     cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
			     cout<<"\n\nObrigado por escolher nossos serviços!\n";
			     break;
                }
                cout<<"\n \t\t\t Gostaria de pedir mais alguma coisa?(S/N): ";
                cin>>gotobeginning;
                if(gotobeginning == 'S'||gotobeginning == 's')
                {
                    goto starting;
                    //return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }
            }
        }
      }
      else if(opcao == 2)
      {
        system("cls");
        cout<<"\t\t\t|-------------------------------------------------------|\n";
	    cout<<"\t\t\t|                      HAMBÚRGUERES                     |\n";
	    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
        cout<<"\n \t\t\t 1. "<<burguer_1<<" R$10.00\n";
        cout<<"\n \t\t\t 2. "<<burguer_2<<" R$15.00\n";
        cout<<"\n \t\t\t 3. "<<burguer_3<<" R$20.00\n";
        cout<<"\n \t\t\t Qual o hambúrguer gostaria de pedir?: ";
        cin>>pizzaopcao1;
        if(pizzaopcao1>=1&&pizzaopcao1<=3)
        {
         cout<<"\n \t\t\t === Quantidade ===\n";
         cout<<"\n \t\t\t Selecione a quantidade: ";
         cin>>quant;

         switch(pizzaopcao1)
            {
             case 1:
             opcao = 10*quant;
             break;
             case 2:
             opcao = 15*quant;
             break;
             case 3:
             opcao = 20*quant;
             break;
            }
            system("cls");
            switch(pizzaopcao1)
            {
             case 1:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<burguer_1;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 2:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<burguer_2;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 3:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<burguer_3;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
            }
            cout<<"\n \t\t\t Gostaria de pedir mais alguma coisa?(S/N): ";
                cin>>gotobeginning;
                if(gotobeginning == 'S'||gotobeginning == 's')
                {
                    goto starting;
                    //return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }

        }
      }
      else if(opcao == 3)
      {
        system("cls");
        cout<<"\t\t\t|-------------------------------------------------------|\n";
	    cout<<"\t\t\t|                      LANCHES                          |\n";
	    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
        cout<<"\n \t\t\t 1. "<<lanche_1<<" R$7.00\n";
        cout<<"\n \t\t\t 2. "<<lanche_2<<" R$12.00\n";
        cout<<"\n \t\t\t 3. "<<lanche_3<<" R$15.00\n";
        cout<<"\n \t\t\t Qual o lache gostaria de pedir?: ";
        cin>>pizzaopcao1;
        if(pizzaopcao1>=1&&pizzaopcao1<=3)
        {
         cout<<"\n \t\t\t === Quantidade ===\n";
         cout<<"\n \t\t\t Selecione a quantidade: ";
         cin>>quant;

         switch(pizzaopcao1)
            {
             case 1:
             opcao = 7*quant;
             break;
             case 2:
             opcao = 12*quant;
             break;
             case 3:
             opcao = 15*quant;
             break;
            }
            system("cls");
            switch(pizzaopcao1)
            {
             case 1:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<lanche_1;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 2:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<lanche_2;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 3:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<lanche_3;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
            }
            cout<<"\n \t\t\t Gostaria de pedir mais alguma coisa?(S/N): ";
                cin>>gotobeginning;
                if(gotobeginning == 'S'||gotobeginning == 's')
                {
                    goto starting;
                    //return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }

        }
      }
         else if(opcao == 4)
      {
        system("cls");
        cout<<"\t\t\t|-------------------------------------------------------|\n";
	    cout<<"\t\t\t|                      BEBIDAS                          |\n";
	    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
        cout<<"\n \t\t\t 1. "<<bebida1<<" R$5.00\n";
        cout<<"\n \t\t\t 2. "<<bebida2<<" R$8.00\n";
        cout<<"\n \t\t\t 3. "<<bebida3<<" R$12.00\n";
        cout<<"\n \t\t\t Qual bebida gostaria de pedir?: ";
        cin>>pizzaopcao1;
        if(pizzaopcao1>=1&&pizzaopcao1<=3)
        {
         cout<<"\n \t\t\t === Quantidade ===\n";
         cout<<"\n \t\t\t Selecione a quantidade: ";
         cin>>quant;

         switch(pizzaopcao1)
            {
             case 1:
             opcao = 5*quant;
             break;
             case 2:
             opcao = 8*quant;
             break;
             case 3:
             opcao = 12*quant;
             break;
            }
            system("cls");
            switch(pizzaopcao1)
            {
             case 1:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<bebida1;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 2:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<bebida2;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 3:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<bebida3;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
            }
            cout<<"\n \t\t\t Gostaria de pedir mais alguma coisa?(S/N): ";
                cin>>gotobeginning;
                if(gotobeginning == 'S'||gotobeginning == 's')
                {
                    goto starting;
                    //return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }

        }
      }
         else if(opcao == 5)
      {
        system("cls");
        cout<<"\t\t\t|-------------------------------------------------------|\n";
	    cout<<"\t\t\t|                      FRITURAS                         |\n";
	    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
        cout<<"\n \t\t\t 1. "<<fritas_1<<" R$10.00\n";
        cout<<"\n \t\t\t 2. "<<fritas_2<<" R$20.00\n";
        cout<<"\n \t\t\t 3. "<<fritas_3<<" R$30.00\n";
        cout<<"\n \t\t\t Qual fritura gostaria de pedir?: ";
        cin>>pizzaopcao1;
        if(pizzaopcao1>=1&&pizzaopcao1<=3)
        {
         cout<<"\n \t\t\t === Quantidade ===\n";
         cout<<"\n \t\t\t Selecione a quantidade: ";
         cin>>quant;

         switch(pizzaopcao1)
            {
             case 1:
             opcao = 10*quant;
             break;
             case 2:
             opcao = 20*quant;
             break;
             case 3:
             opcao = 30*quant;
             break;
            }
            system("cls");
            switch(pizzaopcao1)
            {
             case 1:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<fritas_1;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 2:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<fritas_2;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
             case 3:
             cout<<"\n \t\t\t ====== SEU PEDIDO ======\n";
             cout<<""<<quant<<" "<<fritas_3;
             cout<<"\nTotal a pagar é: R$"<<opcao<<"\nSeu pedido será entregue em 40 Minutos";
             cout<<"\n\nObrigado por escolher nossos serviços!\n";
             break;
            }
            cout<<"\n \t\t\t Gostaria de pedir mais alguma coisa?(S/N): ";
                cin>>gotobeginning;
                if(gotobeginning == 'S'||gotobeginning == 's')
                {
                    goto starting;
                    //return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }

        }
      }
      else
      {
        system("cls");
        cout<<"\n \t\t\t ===== Selecione uma escolha ===== ";
        cout<<"\n \t\t\t Você gostaria de começar o software novamente?(S/N): ";
        cin>>gotobeginning;
        if(gotobeginning == 'S'|| gotobeginning == 's')
        {
            goto starting;
            //return 0;
        }
        else
                {
                    system("cls");
                    cout<<"\n\n";
                    cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                    cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                    cout<<"\n\n";
                    exit(0);
                }
      }
      getch();

}
