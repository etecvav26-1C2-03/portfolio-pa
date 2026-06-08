#include <iostream>
#include <string>

//Fazendo contagem das vogais:
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
//-------------------------

//Contagem das consoantes:
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
//-----------------------------

int main()
{
    std::string nome;

    //Lendo o valor de nome:
    std::cout << "Digite seu nome completo:\n\n>> ";
    std::getline(std::cin, nome);
    //-----------------

    //Exibição dos valores de vogais e consoantes:
    std::cout << "\nQuantidade de vogais: "
              << contarVogais(nome);

    std::cout << "\nQuantidade de consoantes: "
              << contarConsoantes(nome);
    //--------------------------------------

    return 0;
}
