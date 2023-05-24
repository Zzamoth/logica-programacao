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
  float Total;
  float pgM;   // Mulheres pagantes
  float pgC;   // crianças pagantes
  float pgH;   // Homens pagantes
  char r1, r2; // resposta 1 e resposta 2
  int repetir;

  cout << ("deseja calcular quantos churrascos: ");
  cin >> repetir;

  for (int i = 0; i < repetir; i++)
  {
    do // roda o codigo
    {
      cout << ("qual a quantidade de homens ? ") << endl;
      cin >> homens;
      cout << ("qual a quantidade de mulheres ? ") << endl;
      cin >> mulheres;
      cout << ("qual a quantidade de criancas ? ") << endl;
      cin >> criancas;

      if (mulheres < 0 || homens < 0 || criancas < 0)
      {
        cout << "ERRO!" << endl;
      }
    } while (mulheres < 0 || homens < 0 || criancas < 0); // repete o coigo com uma condição

    cout << ("Qual o valor do kg da carne? R$: ") << endl;
    cin >> ValCarne;

    TotalDeCarne = (homens * CH) + (mulheres * CM) + (criancas * CC);
    TotalDeCarne = TotalDeCarne / 1000;
    cout << ("Quantidade de carne total do churasco: ") << TotalDeCarne << endl;
    Total = TotalDeCarne * ValCarne;
    cout << ("Valor total do churasco: ") << Total << endl;

    cout << ("crianca paga ?(s/n) ");
    cin >> r1;

    if (r1 == 'n')
    {
      pgC = 0;
    }
    cout << ("mulheres pagam ? (s/n)") << endl;
    cin >> r2;
    if (r2 == 's')
    {
      pgM = 0;
      pgH = Total / homens;
    }
    else
    {
      pgM = Total / (criancas + mulheres);
      pgH = pgM;

      cout << ("valor total por pessoa e R$ ") << pgH;
    }
  }
  return 0;
}
