#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(std::time(0));

    int numeroSecreto = std::rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    std::cout << "Jogo de Adivinhacao!" << std::endl;

    do {

        std::cout << "Digite seu palpite: ";

        if(!(std::cin >> palpite)) {
            std::cout << "Erro ao ler o numero!";
            return 0;
        }

        tentativas++;

        if(palpite > numeroSecreto) {
            std::cout << "Mais!" << std::endl;
        }
        else if(palpite < numeroSecreto) {
            std::cout << "Menos!" << std::endl;
        }
        else {
            std::cout << "Correto!" << std::endl;
        }

    } while(palpite != numeroSecreto);

    std::cout << "Quantidade de tentativas: " << tentativas;

    return 0;
}
