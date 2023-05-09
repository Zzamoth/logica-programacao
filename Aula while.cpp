#include <iostream>

using namespace std;

int main()
{

    char r;
    int Numero;
    int c = 0;
    int pares= 0;

    do
    {
        cout << "Digite um numero: ";
        cin >> Numero;
        cout << "Outro ?";
        cin >> r;
        c++;
        if ()
        {
            /* code */
        }
        

    } while (r == 's');

    cout << c;
    cout << pares;

        return 0;
}

/* char resp = 's'; // wile funcionara caso ele receber s, caso não receber o codigo vai gravar o resp e retornar 0

while (resp == 's') // repita caso resp for igual a 's'
{
    cout << "bom dia " << endl;

    cout << ("Repetir (s/n):");
    cin >> resp;

}

char resposta;

do // o do ele roda e depois pergunta se deseja repetir
{
    cout << "bom dia" << endl;

    cout << "repetir (s/n): ";
    cin >> resp;

} while (resp == 's');

*/