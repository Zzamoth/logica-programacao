#include <iostream>

using namespace std;


int main(){

int idade;
char sexo;

    cout << ("digite sua idade: ");
    cin >> idade;
    
    cout << ("Digite seu sexo (F,M): ");
    cin >> sexo;


        if (sexo == 'f' && idade <= 21 )
        cout << ("bem vindo");
        

        else if (sexo == 'm' && idade <=18)
        cout << ("Bem vindo");




}