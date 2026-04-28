// Exercício 1 - C++

#include <iostream>
using namespace std;

int main() {
    int n1, i;
    bool primo = true;
    
    cout << "Insira um número:";
    cin >> n1;
    for (i = 2; n1 % i == 0; i++ ){
        primo = false;
        break;
    }
    
    if (primo == false){
        cout << "Esse número não é primo.";
    }
    
    else{
        cout << "Esse número é primo.";
    }
    return 0;
}

