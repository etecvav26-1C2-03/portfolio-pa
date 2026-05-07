/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: n primo.cpp
* Data: 01/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição:
* Ler um número inteiro. Verificar e exibir se o número é primo.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Escreva um número: ";
    cin >> num;

    //verificar se o número é divisivel por 2
    if (num < 2) {
        primo = false;
    } 
    // verificar se é primo
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }
    // resultado
    if (primo) {
        cout << num << " é primo." << endl;
    } else {
        cout << num << " não é primo.";
    }

    return 0;
}
