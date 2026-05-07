/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: fibonacci.cpp
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

    cout << "Escreva um numero entre 50 e 100: ";
    cin >> limit;

    //verificar se o número está entre 50 e 100
    if (limit < 50 || limit > 100) {
        cout << "Invalid number!" << endl;
        return 0;
    }

    int ant = 0, atual = 1, prox;

    //calcular o fibonacci
    while (ant <= limit) {
        cout << ant << " ";
        prox = ant + atual;
        ant = atual;
        atual = prox;
    }

    cout << endl;
    return 0;
}
