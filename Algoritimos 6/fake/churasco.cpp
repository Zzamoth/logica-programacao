#include <iostream>

using namespace std;

// quantidade de carne por pessoa
#define CH 300 // 300g de carne por homem
#define CM 250 // 250g de carne por mulher
#define CC 150 // 150g de carne por criança

int main()
{

  float criancas, mulheres, homens;
  float TotalDeCarne; // total de carne
  float ValCarne;     // valor da carne
<<<<<<< HEAD
  float Total;
=======
  float Total;      // valor total do churasco
>>>>>>> 3b4ce9bb7508af0c14b9a698a9459ef3097c054a
  float pgTot = 0; // Total a ser pago
  char r1, r2;     // resposta 1 e resposta 2
  int repetir;

<<<<<<< HEAD
  cout << ("deseja calcular quantos churrascos: ");
  cin >> repetir;

  for (int i = 0; i < repetir; i++)
=======
  cout << ("deseja calcular quantos churrascos: "); // entrada
  cin >> repetir; // saida

  for (int i = 0; i < repetir; i++) // repete o codigo inteiro quantas vezes desejar 
>>>>>>> 3b4ce9bb7508af0c14b9a698a9459ef3097c054a
  {
    do // roda o codigo
    {
      cout << ("qual a quantidade de homens ? ") << endl;
      cin >> homens;
      cout << ("qual a quantidade de mulheres ? ") << endl;
      cin >> mulheres;
      cout << ("qual a quantidade de criancas ? ") << endl;
      cin >> criancas;

<<<<<<< HEAD
      if (mulheres < 0 || homens < 0 || criancas < 0)
=======
      if (mulheres < 0 || homens < 0 || criancas < 0) // verifica se as variaves são menores que 0
>>>>>>> 3b4ce9bb7508af0c14b9a698a9459ef3097c054a
      {
        cout << "ERRO!" << endl;
      }
    } while (mulheres < 0 || homens < 0 || criancas < 0); // repete o coigo com uma condição

    cout << ("Qual o valor do kg da carne? R$: ") << endl;
    cin >> ValCarne;

<<<<<<< HEAD
    TotalDeCarne = (homens * CH) + (mulheres * CM) + (criancas * CC);
=======
    TotalDeCarne = (homens * CH) + (mulheres * CM) + (criancas * CC); // calcula 
>>>>>>> 3b4ce9bb7508af0c14b9a698a9459ef3097c054a
    TotalDeCarne = TotalDeCarne / 1000;
    cout << ("Quantidade de carne total do churasco: ") << TotalDeCarne << endl;
    Total = TotalDeCarne * ValCarne;
    cout << ("Valor total do churasco: ") << Total << endl;

    cout << ("crianca paga ?(s/n) ");
    cin >> r1;
    cout << ("mulheres pagam ? (s/n)") << endl;
    cin >> r2;

    if (r1 == 'n' && r2 == 'n')
    {
      pgTot = Total / homens;
    }
    else if (r1 == 's' && r2 == 'n')
    {
      pgTot = Total / (homens + criancas);
    }
    else if (r1 == 'n' && r2 == 's')
    {
      pgTot = Total / (homens + mulheres);
    }
    else
    {
      pgTot = Total / (homens + mulheres + criancas);
    }
    cout << ("valor total por pessoa e R$ ") << pgTot;
  }
  return 0;
}
