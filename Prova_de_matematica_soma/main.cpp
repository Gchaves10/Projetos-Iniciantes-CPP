#include <cstdlib>
#include <ctime>
#include <iostream>
#include <locale.h>

using namespace std;
int main (int argc, char const* argv[])
{
      setlocale (LC_ALL,"");
      srand((unsigned)time(0)); //para gerar números aleatórios reais.
      //Gerar números aleatórios de 0 a 100
      int maior = 99;
      int menor = 0;
      //Variaveis dos números
      int aleatorio = rand()%(maior-menor+1) + menor;
      int aleatorio_dois = rand()%(maior-menor+1) + menor;

      int aleatorio_tres = rand()%(maior-menor+1) + menor;
      int aleatorio_quatro = rand()%(maior-menor+1) + menor;

      int aleatorio_cinco = rand()%(maior-menor+1) + menor;
      int aleatorio_seis = rand()%(maior-menor+1) + menor;

      int aleatorio_sete = rand()%(maior-menor+1) + menor;
      int aleatorio_oito = rand()%(maior-menor+1) + menor;

      int aleatorio_nove = rand()%(maior-menor+1) + menor;
      int aleatorio_dez = rand()%(maior-menor+1) + menor;

      int resposta;
      int acerto1,acerto2,acerto3,acerto4,acerto5;

      //Pergunta 1
      cout<<"\n \t\t\t === 1.Qual a soma de "<<aleatorio<<" + "<<aleatorio_dois<<"?===\n";
      cout<<"\n \t\t\t Resposta: ";
      cin>>resposta;

      if(resposta == aleatorio+aleatorio_dois)
      {
        system("cls");
        cout<<"\n \t\t\t Você acertou!!";
        cout<< "\n \t\t\t "<<aleatorio<<" + "<<aleatorio_dois<< " = "<<aleatorio+aleatorio_dois;
        acerto1 =1;
        cout<<"\n \t\t\t Acertos = "<<acerto1;
      }
      else
      {
        system("cls");
        cout<<"\n Você respondeu: "<<resposta;
        cout<<"\n \t\t\t Hmmm que tal revisar os cálculos?!";
        cout<< "\n \t\t\t "<<aleatorio<<" + "<<aleatorio_dois<< " = "<<aleatorio+aleatorio_dois;
        acerto1 =0;
        cout<<"\n \t\t\t Acertos = "<<acerto1;
      }
      //Pergunta 2
      cout<<"\n \t\t\t === 2.Qual a soma de "<<aleatorio_tres<<" + "<<aleatorio_quatro<<"?===\n";
      cout<<"\n \t\t\t Resposta: ";
      cin>>resposta;

      if(resposta == aleatorio_tres+aleatorio_quatro)
        {
         system("cls");
         cout<<"\n \t\t\t Você acertou !!";
         cout<< "\n \t\t\t "<<aleatorio_tres<<" + "<<aleatorio_quatro<< " = "<<aleatorio_tres+aleatorio_quatro;
         if(acerto1 == 0)
            {
             acerto2 = 1;
             cout<<"\n \t\t\t Acertos = "<<acerto2;
            }
         if(acerto1 == 1)
            {
             acerto2 = acerto1+1;
             cout<<"\n \t\t\t Acertos = "<<acerto2;
            }
        }
        else
        {
         system("cls");
         cout<<"\n Você respondeu: "<<resposta;
         cout<<"\n \t\t\t Hmmm que tal revisar os cálculos?!";
         cout<< "\n \t\t\t "<<aleatorio_tres<<" + "<<aleatorio_quatro<< " = "<<aleatorio_tres+aleatorio_quatro;
         cout<<"\n \t\t\t Acertos = "<<acerto1;
        }

        //Pergunta 3
        cout<<"\n \t\t\t === 3.Qual a soma de "<<aleatorio_cinco<<" + "<<aleatorio_seis<<"?===\n";
        cout<<"\n \t\t\t Resposta: ";
        cin>>resposta;

      if(resposta == aleatorio_cinco+aleatorio_seis)
        {
         system("cls");
         cout<<"\n \t\t\t Você acertou !!";
         cout<< "\n \t\t\t "<<aleatorio_cinco<<" + "<<aleatorio_seis<< " = "<<aleatorio_cinco+aleatorio_seis;
         if(acerto1&&acerto2 == 0)
            {
             acerto3 = 1;
             cout<<"\n \t\t\t Acertos = "<<acerto3;
            }
         if(acerto2 == 2)
            {
             acerto3 = acerto2+1;
             cout<<"\n \t\t\t Acertos = "<<acerto3;
            }
        }
        else
        {
         system("cls");
         cout<<"\n Você respondeu: "<<resposta;
         cout<<"\n \t\t\t Hmmm que tal revisar os cálculos?!";
         cout<< "\n \t\t\t "<<aleatorio_cinco<<" + "<<aleatorio_seis<< " = "<<aleatorio_cinco+aleatorio_seis;
         cout<<"\n \t\t\t Acertos = "<<acerto2;
        }
        //Pergunta 4
        cout<<"\n \t\t\t === 4.Qual a soma de "<<aleatorio_sete<<" + "<<aleatorio_oito<<"?===\n";
        cout<<"\n \t\t\t Resposta: ";
        cin>>resposta;

      if(resposta == aleatorio_sete+aleatorio_oito)
        {
         system("cls");
         cout<<"\n \t\t\t Você acertou !!";
         cout<< "\n \t\t\t "<<aleatorio_sete<<" + "<<aleatorio_oito<< " = "<<aleatorio_sete+aleatorio_oito;
         if(acerto1&&acerto2&&acerto3 == 0)
            {
             acerto4 = 1;
             cout<<"\n \t\t\t Acertos = "<<acerto4;
            }
         if(acerto3 == 3||acerto3==2||acerto3 ==1)
            {
             acerto4 = acerto3+1;
             cout<<"\n \t\t\t Acertos = "<<acerto4;
            }
        }
        else
        {
         system("cls");
         cout<<"\n Você respondeu: "<<resposta;
         cout<<"\n \t\t\t Hmmm que tal revisar os cálculos?!";
         cout<< "\n \t\t\t "<<aleatorio_cinco<<" + "<<aleatorio_seis<< " = "<<aleatorio_cinco+aleatorio_seis;
         cout<<"\n \t\t\t Acertos = "<<acerto3;
        }
        //Pergunta 5
        cout<<"\n \t\t\t === 5.Qual a soma de "<<aleatorio_nove<<" + "<<aleatorio_dez<<"?===\n";
        cout<<"\n \t\t\t Resposta: ";
        cin>>resposta;

      if(resposta == aleatorio_nove+aleatorio_dez)
        {
         system("cls");
         cout<<"\n \t\t\t Você acertou !!";
         cout<< "\n \t\t\t "<<aleatorio_nove<<" + "<<aleatorio_dez<< " = "<<aleatorio_nove+aleatorio_dez;
         if(acerto1&&acerto2&&acerto3&&acerto4 == 0)
            {
             acerto5 = 1;
             cout<<"\n \t\t\t Acertos = "<<acerto5;
            }
         if(acerto4==4||acerto4 == 3||acerto4==2||acerto4 ==1)
            {
             acerto5 = acerto4+1;
             cout<<"\n \t\t\t Acertos = "<<acerto5;
            }
        }
        else
        {
         system("cls");
         cout<<"\n Você respondeu: "<<resposta;
         cout<<"\n \t\t\t Hmmm que tal revisar os cálculos?!";
         cout<< "\n \t\t\t "<<aleatorio_cinco<<" + "<<aleatorio_seis<< " = "<<aleatorio_cinco+aleatorio_seis;
         cout<<"\n \t\t\t Acertos = "<<acerto4;
        }
        cout<<"\n \t\t\t ======== FIM DO TESTE ========\n";
        return 0;
}
