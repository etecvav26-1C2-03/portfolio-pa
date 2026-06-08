#include <iostream>
#include <string>

//Verificação palindromo
bool palindromo(std::string palavra) {
    int inicio = 0;
    int fim = palavra.length() - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return false;
        }

        inicio++;
        fim--;
    }

    return true;
}
//----------------------

int main() {
    std::string palavra;
    
    //Lendo palavra:
    std::cout << "Digite uma palavra:\n\n>> ";
    std::cin >> palavra;
    //------------

    //Resultado da função:
    if (palindromo(palavra)) {
        std::cout << "\n\n------ CONCLUSAO ------\n\n>> Palindromo!";
    } else {
        std::cout << "\n\n------ CONCLUSAO ------\n\n>> Nao e um palindromo!";
    }
    //------------------
    
    return 0;
}
