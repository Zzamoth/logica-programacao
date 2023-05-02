#include <iostream>

using namespace std;

#define CH 300 // 300g de carne por homem 
#define CM 250 // 250g de carne por mulher
#define CC 150 // 150g de carne por criança

int main ()
{

int criancas, mulheres, homens;
float TotalDeCarne;
float ValCarne;
float Total;
int r1, r2;


cout << ("qual a quantidade de homens ? ") << endl;
cin >> homens;
cout << ("qual a quantidade de mulheres ? ") << endl;
cin >> mulheres;
cout << ("qual a quantidade de criancas ? ") << endl; 
cin >> criancas;

cout << ("Qual o valor do kg da carne? R$: ") << endl;
cin >> ValCarne;

TotalDeCarne = (homens * CH) + (mulheres * CM) + (criancas * CC);
TotalDeCarne = TotalDeCarne/1000;
cout << ("Quantidade de carne total do churasco: ") << TotalDeCarne << endl;
Total = TotalDeCarne * ValCarne;
cout << ("Valor total do churasco: ") << Total << endl;

cout << ("crianca paga ?(s/n) ");
cin >> r1;

   if (r1 == 'n'){
    pgC = 0;
    
   }
    cout << ("mulheres pagam ? (s/n) ");
    cin >> r2;

    if(r2 == 's'){
    
     pgM = 0;
     pgH = Total/homens;

    } 
      else
    {
    pgM = Total/(criancas + mulheres);
    pgH = pgM;

    cout << ("valor total por pessoa e R$ ") << pgH; 
    }
 return 0;
}











/*
    c= criançasTotal 
    h= homens
    m= mulheres
    ct = total
    tc = total de carne
    $carne: Valor Da Carne
    Fpagante
    Cpagante
  */

 /*  diga que homem, mulher, crianca tem que ser >= 0 
se for menor <0 diga "numero invalido digite nivamente" */ 