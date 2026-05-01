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

    if (num < 2) {
        primo = false;
    } 
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << num << " é primo." << endl;
    } else {
        cout << num << " não é primo.";
    }

    return 0;
}
