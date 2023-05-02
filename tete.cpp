#include <iostream>

using namespace std;

int main() {


/*int num_criancas, num_mulheres, num_homens;
   float valor_total, valor_por_pessoa;

   // Solicita o número de crianças, mulheres e homens
   cout << "Digite o numero de criancas: ";
   cin >> num_criancas;
   cout << "Digite o numero de mulheres: ";
   cin >> num_mulheres;
   cout << "Digite o numero de homens: ";
   cin >> num_homens;

   // Solicita o valor total do churrasco
   cout << "Digite o valor total do churrasco: ";
   cin >> valor_total;

   // Calcula o valor por pessoa e imprime o resultado
   int num_pessoas = num_criancas + num_mulheres + num_homens;
   valor_por_pessoa = valor_total / num_pessoas;

   cout << "O valor por pessoa é de: R$ " << valor_por_pessoa << endl;*/


   int num_pessoas;
  float valor_total, valor_doce, valor_salgado, valor_bebida, valor_individual;
  float valor_comida;

  // Pedir informações do usuário
  cout << "Quantas pessoas participaram da festa? ";
  cin >> num_pessoas;

  cout << "Qual foi o valor total gasto em doces? ";
  cin >> valor_doce;

  cout << "Qual foi o valor gasto em salgados? ";
  cin >> valor_salgado;

  cout << "Qual foi o valor gasto em bebidas? ";
  cin >> valor_bebida;

  cout << "Qual foi o valor gasto no total? ";
  cin >> valor_total;

  // Calcular o valor individual
  valor_comida = (valor_doce + valor_salgado) + valor_bebida;

  // Mostrar resultado
  cout << "Cada pessoa deve pagar R$" << valor_total / num_pessoas << endl;

   return 0;
}