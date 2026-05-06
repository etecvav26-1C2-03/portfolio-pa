#include <iostream>

int main() {
    int pessoas;
    float altura, soma = 0, media;

    std::cout << "Digite a quantidade de pessoas: ";
    std::cin >> pessoas;

    for(int i = 1; i <= pessoas; i++) {
        std::cout << "Digite a altura da pessoa " << i << ": ";
        std::cin >> altura;

        soma += altura;
    }

    media = soma / pessoas;

    std::cout << "A altura media e: " << media;

    return 0;
}
