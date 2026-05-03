/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 09ex_fixed.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler um número entre 50 e 100.
* Exibir a sequência de Fibonacci até esse número.
*/

#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter a number between 50 and 100: ";
    cin >> limit;

    if (limit < 50 || limit > 100) {
        cout << "Invalid number!" << endl;
        return 0;
    }

    int prev = 0, curr = 1, next;

    while (prev <= limit) {
        cout << prev << " ";
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    cout << endl;
    return 0;
}
