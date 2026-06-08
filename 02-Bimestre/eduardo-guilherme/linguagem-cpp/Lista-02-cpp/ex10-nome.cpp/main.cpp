#include <iostream>
#include <string>

int contarVogais(std::string nome)
{
    int vogais = 0;

    for (int i = 0; i < nome.length(); i++)
    {
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' ||
            nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' ||
            nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' ||
            nome[i] == 'U')
        {
            vogais++;
        }
    }

    return vogais;
}

int contarConsoantes(std::string nome)
{
    int consoantes = 0;

    for (int i = 0; i < nome.length(); i++)
    {
        bool letra = (nome[i] >= 'A' && nome[i] <= 'Z') ||
                     (nome[i] >= 'a' && nome[i] <= 'z');

        bool vogal = (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' ||
                      nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' ||
                      nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' ||
                      nome[i] == 'U');

        if (letra && !vogal)
        {
            consoantes++;
        }
    }

    return consoantes;
}

int main()
{
    std::string nome;

    std::cout << "Digite seu nome completo:\n\n>> ";
    std::getline(std::cin, nome);

    std::cout << "\nQuantidade de vogais: "
              << contarVogais(nome);

    std::cout << "\nQuantidade de consoantes: "
              << contarConsoantes(nome);

    return 0;
}
