/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: par e impar.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler um número. Exiba a soma 
* de todos os números pares e ímpares de zero até o número lido.
*/

#include <iostream>
using namespace std;

int main() {
    int n, somaim = 0, somapa = 0;
    
    cout << "numero limitador: ";
    cin >> n;

    //calcular a soma dos pares
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            somapa += i;
        }
        //soma dos impares
        else {
            somaim += i;
        }
    }
    cout << "soma dos pares: " << somapa << endl;
    cout << "soma dos impares: " << somaim;
    return 0;
}
