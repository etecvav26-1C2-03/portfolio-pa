// Exercício 2 - C++

#include <iostream>
using namespace std;

int main() {
  int n1;
  int resultado = 1;
  
  cout << "Escreva um número:";
  cin >> n1;
  
  cout << "2^0=" << resultado << endl;
  
  for(int i = 1;i <= n1;i++){
     resultado *= 2;
     cout << "2^" << i << "=" <<resultado << endl;
  }
  
    return 0;
}