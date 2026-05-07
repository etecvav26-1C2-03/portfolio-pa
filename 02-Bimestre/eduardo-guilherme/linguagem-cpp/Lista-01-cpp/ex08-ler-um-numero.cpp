

#include <iostream>

int main() {
    int numero;
    int somaPar = 0;
    int somaImpar = 0;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    for(int i = 0; i <= numero; i++) {

        if(i % 2 == 0) {
            somaPar += i;
        }
        else {
            somaImpar += i;
        }
    }

    std::cout << "Soma dos pares: " << somaPar << std::endl;
    std::cout << "Soma dos impares: " << somaImpar << std::endl;

    return 0;
}
