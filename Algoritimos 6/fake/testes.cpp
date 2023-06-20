#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));

    int NS = rand() % 100 + 1;
    int tentativas = 0;
    int palpite = 0;
    bool acertou = false;

    do
    {
        (palpite != NS);
        {
            cout << " Digite um numero entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite == NS)
            {
                cout << "Parabens voce acertou o numero em " << tentativas << "tentativas!" << endl;
                acertou = true;
            }
            else if (abs(palpite - NS) <= 5)
            {
                cout << "Muito perto!" << endl;
            }
            else if (abs(palpite - NS) <= 10)
            {
                cout << "Perto!" << endl;
            }
            else
            {
                cout << "Longe!" << endl;
            }
        }
    } while (acertou == false);
    return 0;
}
