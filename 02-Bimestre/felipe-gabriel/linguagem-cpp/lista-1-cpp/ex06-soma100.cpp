/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: soma100.cpp
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
    long long som = 0, mult = 1;

    //loop para digitar os números
    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        som += number;
        mult *= number; 
        //terminar a soma quando chegra a 100
        if (sum > 100) {break;}
    }

    cout << "Product of all numbers: " << product << endl;
    return 0;
}
