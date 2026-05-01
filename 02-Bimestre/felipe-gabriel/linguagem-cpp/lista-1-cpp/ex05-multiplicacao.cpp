/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: multiplicacao.cpp
* Data: 01/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição:
* Ler um número para a parada final e outro número que representa um múltiplo.
* Exibir os múltiplos do número lido de 1 até o número final lido.
*/

#include <iostream>
using namespace std;

int main() {
    int lim, mult;
    
    cout << "Escreva o número multiplicador: ";
    cin >> mult;

    cout << "Escreva o limite: ";
    cin >> lim;
    
    cout << "Multiplos de " << mult << " do 1 até " << lim << ": " << endl;

    for (int i = 1; i <= lim; i++) {
        if (i % mult == 0) {
            cout << i << "  ";
        }
    }

    cout << endl;
    return 0;
}
