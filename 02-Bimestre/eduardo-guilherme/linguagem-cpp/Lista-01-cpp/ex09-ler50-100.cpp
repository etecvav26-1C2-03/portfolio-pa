#include <iostream>

int main() {
    int limite;

    std::cout << "Digite um numero entre 50 e 100: ";
    std::cin >> limite;

    if(limite < 50 || limite > 100) {
        std::cout << "Numero invalido!";
        return 0;
    }

    int a = 0;
    int b = 1;
    int proximo;

    std::cout << "Sequencia de Fibonacci: ";

    while(a <= limite) {
        std::cout << a << " ";

        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}
