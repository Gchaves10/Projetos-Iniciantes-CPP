#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

    //Estrutura de complexos
    typedef struct complex
    {
       float real;
       float imag;
    } numeroComplexo;

//Defini��o das fun��es
numeroComplexo somanumeroComplexos(complex, complex);
numeroComplexo subnumeroComplexos(complex, complex);

int main()
{
    setlocale(LC_ALL,"");

    //Vari�veis

    numeroComplexo num1, num2, somaComplexo,subComplexo;
    char sinaldaImagem;
    int op;
    char reseta;
    double x,base,potencia, resultado = 1;
    double logaritmo_xbase10 = 0;
    int n,i,raiz,expoente,numero;
    long double fatorial = 1.0;

while(1)
    {
      system("cls");
      cout<<"\n\t ***************** Calculadora **************\n";
      cout<<"\n\t *****************   Simples     **************\n";
      //Menu
      cout<< "\n \t\t\t 1 - Pot�ncia";
      cout<< "\n \t\t\t 2 - Raiz";
      cout<< "\n \t\t\t 3 - Logaritmo";
      cout<< "\n \t\t\t 4 - Fatorial";
      cout<< "\n \t\t\t 5 - Soma de Complexos";
      cout<< "\n \t\t\t 6 - Subtra��es de Complexos";
      cout<<endl;

      //Solicitando ao usu�rio
      cout<<" \n \t\t\t Selecione uma opera��o =>: ";
      cin>>op;


      //Criando as op��es do menu com Switch
      switch(op)
       {
            /* Pot�ncia */
         case 1:
         reseta = 'S';
         while(reseta == 'S'|| reseta == 's')
            {
             system("cls");
             cout<<"\n \t\t\t ****** POT�NCIA ********\n";
             cout<<"\n Digite o valor da Base: ";
             cin>>base;
             cout<<"\n Digite o valor do Expoente: ";
             cin>>expoente;
             cout<<"\n "<<base<<" elevado a "<<expoente<<" = ";
             while(expoente!=0)
                {
                  resultado *=base;
                 --expoente;
                }
                cout<<resultado;
                cout<<"\n Deseja realizar outra potencia��o? (S/N)";
                cin>>reseta;
            }
            break;

            /* Raiz Quadrada */

          case 2:
          reseta = 'S';
          while(reseta == 'S'|| reseta == 's')
            {
              system("cls");
              cout<<"\n \t\t\t ****** RAIZ QUADRADA ********\n";
              cout<<"\n Digite um n�mero para saber sua raiz quadrada: ";
              cin>>numero;
              //Condi��es
              if (numero>0)
                {
		         raiz = sqrt(numero);
                 cout<<"\n A Raiz quadrada de "<<numero<<" = "<<raiz;
	            }
	            else
                {
                 cout<<"\n ----------- N�mero negativo ---------- \n";
		         cout<<"\n N�o existe raiz real (R) para negativos";
                }
                cout<<"\n Deseja realizar outra raiz quadrada? (S/N)";
                cin>>reseta;
            }
            break;

            /* Logaritmo */

            case 3:
            reseta = 'S';
            while(reseta == 'S'|| reseta == 's')
                {
                  system("cls");
                  cout<<"\n \t\t\t ****** LOGARITMO DE BASE 10 ********\n";
                  cout<<"\n Digite um inteiro: ";
	              cin>>x;
	              //Condi��es
	              if(x>0)
	                {
		             logaritmo_xbase10 = log10(x);
		             cout<<"\n log10("<<x<<") = "<<logaritmo_xbase10;
	                }
	                else
                    {
                      cout<<"\n N�mero Inv�lido";
	                }
	                cout<<"\n Deseja realizar outro c�lculo de logaritmo? (S/N)";
                    cin>>reseta;
                }
                break;

	            /* Fatorial */

                case 4:
                reseta = 'S';
                while(reseta == 'S'|| reseta == 's')
                    {
                      system("cls");
                     cout<<"\n \t\t\t ****** FATORIAL ********\n";
                     cout<<"\n Digite um inteiro positivo: ";
                     cin>>n;
                     //Condi��o
                     if(n < 0)
                        {
                         cout<<"\n ERRO! O fatorial de um n�mero negativo n�o existe!";
                        }
                        else
                        {
                            for(i = 1; i <= n; ++i)
                            {
                              fatorial *=i;
                            }
                            cout<<"\n "<<n<<"! = "<<fatorial;
                        }
                        cout<<"\n Deseja realizar outro c�lculo de fatorial? (S/N)";
                        cin>>reseta;
                    }
                    break;

                    /* Soma de Complexos*/

                    case 5:
                    reseta = 'S';
                    while(reseta == 'S'|| reseta == 's')
                        {
                          system("cls");
                          cout<<"\n \t\t\t ****** SOMA DE COMPLEXOS ********\n";
                          cout << "\n \t\t\t ====== Para o primeiro n�mero complexo =======\n" << endl;
                          cout << "Digite primeiro a parte real e depois a imagin�ria:" << endl;
                          cin >> num1.real >> num1.imag;

                          cout << endl
                          << "\n \t\t\t ====== Para o segundo n�mero complexo =======\n" << endl;
                          cout << "Digite primeiro a parte real e depois a imagin�ria:" << endl;
                          cin >> num2.real >> num2.imag;

                          // Chama a fun��oo soma e guarda em somaComplexo
                          somaComplexo = somanumeroComplexos(num1, num2);

                         // Usa um tercerio operador para verificar o sinal do numero imaginario
                         sinaldaImagem = (somaComplexo.imag > 0) ? '+' : '-';

                         // Usa um terceiro operador para ajustar o sinal do numero imagin�rio
                         somaComplexo.imag = (somaComplexo.imag > 0) ? somaComplexo.imag : -somaComplexo.imag;

                         cout<<"\n\t ============= Calculando a soma dos complexos =============== \n";
                         cout<<endl;

                         cout << " ("<<num1.real<<" + "<<num1.imag<<"i) + ("<<num2.real<<" + "<<num2.imag<<"i)"<<" = " << somaComplexo.real << sinaldaImagem << somaComplexo.imag << "i";
                         cout<<"\n\n";
                         cout<<"\n Deseja realizar outra soma de complexos? (S/N)";
                         cin>>reseta;

                        }
                        break;

                        /* Subtra��o Complexos */

                        case 6:
                        reseta = 'S';
                        while(reseta == 'S'|| reseta == 's')
                            {
                              system("cls");
                              cout<<"\n \t\t\t ****** SUBTRA��O DE COMPLEXOS ********\n";
                              cout << "\n \t\t\t ====== Para o primeiro n�mero complexo =======\n" << endl;
                              cout << "Digite primeiro a parte real e depois a imagin�ria:" << endl;
                              cin >> num1.real >> num1.imag;

                              cout << endl
                              << "\n \t\t\t ====== Para o segundo n�mero complexo =======\n"  << endl;
                              cout << "Digite primeiro a parte real e depois a imagin�ria:" << endl;
                              cin >> num2.real >> num2.imag;

                              // Chama a fun��o subtra��o e guarda em subComplexo
                              subComplexo = subnumeroComplexos(num1, num2);

                              // Usa um tercerio operador para verificar o sinal do numero imaginario
                              sinaldaImagem = (subComplexo.imag > 0) ? '+' : '-';

                             // Usa um terceiro operador para ajustar o sinal do numero imagin�rio
                             subComplexo.imag = (subComplexo.imag > 0) ? subComplexo.imag : -subComplexo.imag;

                             cout<<"\n\t ============= Calculando a Subtra��o dos complexos =============== \n";
                             cout<<endl;
                             cout << " ("<<num1.real<<" + "<<num1.imag<<"i) - ("<<num2.real<<" + "<<num2.imag<<"i)"<<" = " << subComplexo.real << sinaldaImagem << subComplexo.imag << "i";
                             cout<<"\n\n";
                             cout<<"\n Deseja realizar outra substra��o de complexos? (S/N)";
                             cin>>reseta;
                            }
                            break;

                            default:
                            cout<<"\n Op��o n�o existe \n";
        }
    }
    return 0;
}

//Fun��es usadas em Complexos
numeroComplexo somanumeroComplexos(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}

numeroComplexo subnumeroComplexos(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real - num2.real;
    temp.imag = num1.imag - num2.imag;
    return (temp);
}
