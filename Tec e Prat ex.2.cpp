#include <iostream>
using namespace std;

int main(){

    /*int idade; 
    char sexo;

    cout << ("Digite sua idade: ");
    cin >> idade;

    cout << ("Digite seu genero: ");
    cin >> sexo;

    if (idade >= 12)
    {
        cout << ("pode entrar ");

    }else if (sexo == 'feminino'){

    }else 
    cout << ("barrado ");

    
    

system("pause");*/



int idade;
char sexo;

    cout << ("digite sua idade: ");
    cin >> idade;
    
    cout << ("Digite seu sexo (F,M): ");
    cin >> sexo;

    
        if (sexo == 'f')
        {cout << ("Bem Vinda ao convento!! ");


        }else if (idade <= 12)
        {cout << ("Bem vindo ao convento! ");

        } else if (idade >= 13)
            cout << ("Barrado!! ") << endl;

        system("pause");

    return 0;
}