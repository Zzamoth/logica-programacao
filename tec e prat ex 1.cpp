#include <iostream>

using namespace std;

int main()

{
    int idade;
    char sexo;

cout << ("digite sua idade: ");
cin >> idade;
    
    
    if (idade <= 18)
        {cout << ("apto a servir\n");

        }else if (idade >= 17)
        cout << ("inapto a servir\n");

 

    cout << ("Digite seu sexo m or f: ");
    cin >> sexo;

    if (sexo == 'm' )
    {cout << ("servir\n");

        } else 
        cout << ("n servir\n");

        system("pause");
    
    return 0;
}