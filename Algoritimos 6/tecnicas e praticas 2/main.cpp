#include <iostream>

//dia 13/04/23 Aula 2 de Tecnicas e praticas

using namespace std;

int main()
{

    /*int n; //entrada
    int d; // saida

    cout << "digite um numero";
    cin >> n;

    d = 2*n;

    cout << "dados de" << n << "=" << d; */


            //Leitura dos coef
             //▲ = b^2-4ac

             int a;
             int b;
             int c;
             int delta;


             cout << endl << "a=";
             cin >> a;
             cout << endl << "b=";
             cin >> b;
             cout << endl << "c=";
             cin >> c;
             cout << endl << endl;

             delta = (b*b)-(4*a*c);

             cout << "delta =" << delta;

                // Obs:




    return 0;
}
//para calculo sempre colocar o cout abaixo dele
