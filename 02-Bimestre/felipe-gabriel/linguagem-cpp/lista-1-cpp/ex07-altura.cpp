/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: altura.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler a quantidade de pessoas e ler a altura dessas pessoas.
* Calcular e exibir a altura média de todas as pessoas.
*/

#include <iostream>
using namespace std;

int main() {
    int pes;
    float alt, som = 0.0f;

    cout << "número de pessoas ";
    cin >> pes;

       //calcular a média da altura
       for (int i = 0; i < pes; i++) {
        cout << "Altura da pessoa " << i + 1 << ": ";
        cin >> alt;
        sum += alt;
    }

    cout << "Altura média: " << som / pes << endl;
 
    return 0;
}
