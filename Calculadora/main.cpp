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

//Definição das funções
numeroComplexo somanumeroComplexos(complex, complex);
numeroComplexo subnumeroComplexos(complex, complex);

int main()
{
    setlocale(LC_ALL,"");

    //Variáveis

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
      cout<<"\n\t\t\t ***************** Calculadora **************\n";
      cout<<"\n\t\t\t *****************   Simples     **************\n";
      //Menu
      cout<< "\n \t\t\t 1 - Potência";
      cout<< "\n \t\t\t 2 - Raiz";
      cout<< "\n \t\t\t 3 - Logaritmo";
      cout<< "\n \t\t\t 4 - Fatorial";
      cout<< "\n \t\t\t 5 - Soma de Complexos";
      cout<< "\n \t\t\t 6 - Subtrações de Complexos";
      cout<< "\n \t\t\t 7 - Sair";
      cout<<endl;

      //Solicitando ao usuário
      cout<<" \n \t\t\t Selecione uma operação =>: ";
      cin>>op;


      //Criando as opções do menu com Switch
      switch(op)
       {
            /* Potência */
         case 1:
         reseta = 'S';
         while(reseta == 'S'|| reseta == 's')
            {
             system("cls");
             cout<<"\n \t\t\t ****** POTÊNCIA ********\n";
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
                cout<<"\n Deseja realizar outra potenciação? (S/N)";
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
              cout<<"\n Digite um número para saber sua raiz quadrada: ";
              cin>>numero;
              //Condições
              if (numero>0)
                {
		         raiz = sqrt(numero);
                 cout<<"\n A Raiz quadrada de "<<numero<<" = "<<raiz;
	            }
	            else
                {
                 cout<<"\n ----------- Número negativo ---------- \n";
		         cout<<"\n Não existe raiz real (R) para negativos";
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
	              //Condições
	              if(x>0)
	                {
		             logaritmo_xbase10 = log10(x);
		             cout<<"\n log10("<<x<<") = "<<logaritmo_xbase10;
	                }
	                else
                    {
                      cout<<"\n NÚmero Inválido";
	                }
	                cout<<"\n Deseja realizar outro cálculo de logaritmo? (S/N)";
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
                     //Condição
                     if(n < 0)
                        {
                         cout<<"\n ERRO! O fatorial de um número negativo não existe!";
                        }
                        else
                        {
                            for(i = 1; i <= n; ++i)
                            {
                              fatorial *=i;
                            }
                            cout<<"\n "<<n<<"! = "<<fatorial;
                        }
                        cout<<"\n Deseja realizar outro cálculo de fatorial? (S/N)";
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
                          cout << "\n \t\t\t ====== Para o primeiro número complexo =======\n" << endl;
                          cout << "Digite primeiro a parte real e depois a imaginária:" << endl;
                          cin >> num1.real >> num1.imag;

                          cout << endl
                          << "\n \t\t\t ====== Para o segundo número complexo =======\n" << endl;
                          cout << "Digite primeiro a parte real e depois a imaginária:" << endl;
                          cin >> num2.real >> num2.imag;

                          // Chama a funçãoo soma e guarda em somaComplexo
                          somaComplexo = somanumeroComplexos(num1, num2);

                         // Usa um tercerio operador para verificar o sinal do numero imaginario
                         sinaldaImagem = (somaComplexo.imag > 0) ? '+' : '-';

                         // Usa um terceiro operador para ajustar o sinal do numero imaginário
                         somaComplexo.imag = (somaComplexo.imag > 0) ? somaComplexo.imag : -somaComplexo.imag;

                         cout<<"\n\t ============= Calculando a soma dos complexos =============== \n";
                         cout<<endl;

                         cout << " ("<<num1.real<<" + "<<num1.imag<<"i) + ("<<num2.real<<" + "<<num2.imag<<"i)"<<" = " << somaComplexo.real << sinaldaImagem << somaComplexo.imag << "i";
                         cout<<"\n\n";
                         cout<<"\n Deseja realizar outra soma de complexos? (S/N)";
                         cin>>reseta;

                        }
                        break;

                        /* Subtração Complexos */

                        case 6:
                        reseta = 'S';
                        while(reseta == 'S'|| reseta == 's')
                            {
                              system("cls");
                              cout<<"\n \t\t\t ****** SUBTRAÇÃO DE COMPLEXOS ********\n";
                              cout << "\n \t\t\t ====== Para o primeiro número complexo =======\n" << endl;
                              cout << "Digite primeiro a parte real e depois a imaginária:" << endl;
                              cin >> num1.real >> num1.imag;

                              cout << endl
                              << "\n \t\t\t ====== Para o segundo número complexo =======\n"  << endl;
                              cout << "Digite primeiro a parte real e depois a imaginária:" << endl;
                              cin >> num2.real >> num2.imag;

                              // Chama a função subtração e guarda em subComplexo
                              subComplexo = subnumeroComplexos(num1, num2);

                              // Usa um tercerio operador para verificar o sinal do numero imaginario
                              sinaldaImagem = (subComplexo.imag > 0) ? '+' : '-';

                             // Usa um terceiro operador para ajustar o sinal do numero imaginário
                             subComplexo.imag = (subComplexo.imag > 0) ? subComplexo.imag : -subComplexo.imag;

                             cout<<"\n\t ============= Calculando a Subtração dos complexos =============== \n";
                             cout<<endl;
                             cout << " ("<<num1.real<<" + "<<num1.imag<<"i) - ("<<num2.real<<" + "<<num2.imag<<"i)"<<" = " << subComplexo.real << sinaldaImagem << subComplexo.imag << "i";
                             cout<<"\n\n";
                             cout<<"\n Deseja realizar outra substração de complexos? (S/N)";
                             cin>>reseta;
                            }
                            break;

                            case 7:
                            cout<<"\n\n";
                            cout<<"\t\t       OBRIGADO POR USAR ESSE SOFTWARE!";
                            cout<<"\t\t\t                  CRIADO POR: GUILHERME CHAVES";
                            cout<<"\n\n";
                            exit(0);
                            default:
                            cout<<"\n Opção não existe \n";
        }
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}

//Funções usadas em Complexos
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
