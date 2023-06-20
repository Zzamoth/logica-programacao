#include <iostream>

using namespace std;

int main() {
   int idade1, idade2;
   
   cout << "Digite a idade da primeira pessoa: ";
   cin >> idade1;
   
   cout << "Digite a idade da segunda pessoa: ";
   cin >> idade2;
   
   if (idade1 > idade2) {
      cout << "A primeira pessoa é mais velha." << endl;
   } else if (idade2 > idade1) {
      cout << "A segunda pessoa é mais velha." << endl;
   } else {
      cout << "As duas pessoas têm a mesma idade." << endl;
   }
   
   return 0;
}
