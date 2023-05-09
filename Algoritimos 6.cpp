#include <iostream>
using namespace std;


int main()
{
 /* float valor_venda, comissao;

    cout << "Entre com o valor de venda";
    cin >> valor_venda;

    if (valor_venda < 30000)
    comissao = valor_venda*0.07;
    else if (valor_venda <= 50000)
        comissao = valor_venda*0.095;

        else
            comissao = valor_venda*0.12; 


  cout << "o valor da comisao e R$ " << comissao;
 */


 int idade;
 char sexo;



  cout << ("digite sua idade: ");
  cin >> idade;

  cout << ("Digite seu sexo:/n ");
  cin >> sexo;



       
    if (idade >= 18)
    { cout << ("apto a servir:/n ");

    }else if (idade <= 17)

     {cout << ("inapto/n ");

     }else (sexo == 'm' )
    { cout << ("servir");

    }else 
      cout << ("n servir");
 
 




    return 0;
}