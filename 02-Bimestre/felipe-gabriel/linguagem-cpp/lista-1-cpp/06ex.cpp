/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 06ex_fixed.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler vários números até que a soma desses números
* seja maior que 100. Exibir a multiplicação dos números lidos.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    long long sum = 0, product = 1;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        sum += number;
        product *= number; 

        if (sum > 100) {break;}
    }

    cout << "Product of all numbers: " << product << endl;
    return 0;
}