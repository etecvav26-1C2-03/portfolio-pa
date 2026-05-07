/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: menor-maior.cpp
* Data: 01/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição: 
* Ler 10 números. Verificar e exibir o menor 
* e maior número dessa sequência.
*/


#include <iostream>
using namespace std;

int main() {
    int num, maior, menor;

    //ler os 10 números
    for (int i = 0; i < 10; i++) {
        cout << "Escreva um numero: " << "loop [" << i + 1 << "]" << endl;
        cin >> num;
        //ver o primeiro numero
        if (i == 0) {
            maior = num;
            menor = num;
        }
else {
            // ver maior numero
            if (num > maior) {
                maior = num;
            }
            //ver menor numero
            if (num < menor) {
                menor = num;
            }
        }
    }
    cout << "maior numero = " << maior << endl;
    cout << "menor numero = " << menor << endl;
        
    

    return 0;
}
