/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: potencias.cpp
* Data: 01/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição: 
* Ler um número inteiro, calcular e exibir separadamente 
* as potências de 2^0 até 2^(esse número).
*/


#include <iostream>
using namespace std;

int main() {
    int num;
    long long res = 1;
    
    cout << "escreva um numero: ";
    cin >> num;
    
for (int i = 0; i <= num; i++) {
        cout << "2^" << i << " == " << res << endl;
        result *= 2;
    }
    return 0;
}
