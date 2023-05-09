#include <iostream>

#define numero 50

using namespace std;

int main()
{
    int tentativas;
    int n;

    cout << "Adivinhe um numero de 1 a 100" << endl;
    cin >> n;
    tentativas = 1;

    while ((n != numero) && (tentativas < 10))
    {
        if (numero)
        {
            cout << "errou" << endl;
            cout << "N= ";
            cin >> n;
            tentativas = tentativas + 1;
        }
        if (n < numero)
        {
            cout << "entre com um numero maior: " << endl;
        }
        else if (n > numero)
        {
            cout << "entre com um numero menor" << endl;
        }
    }

    cout << "acertou com " << tentativas << "tentativas !";

    return 0;
}