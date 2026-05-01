/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: soma.cpp
* Data: 01/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição: 
* Ler vários números até que seja digitado um número negativo. 
* Calcular e exibir a soma desses números.
*/


#include <iostream>
using namespace std;

int main() {
    int num = 0, cont = 0;

    while (true) {
        cout << "escreva um número: " << endl;
        cin >> num;
        if (num < 0) {break;}
        cont += num;

    }
    cout << "a soma dos numeros inteiros é: " << cont << endl;
    
    return 0;
}
