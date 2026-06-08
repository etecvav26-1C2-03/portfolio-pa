#include <iostream>
#include <string>

//Função para trocar as vogais:
std::string substituirVogais(std::string palavra)
{
    for (int i = 0; i < palavra.length(); i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' ||
            palavra[i] == 'i' || palavra[i] == 'o' ||
            palavra[i] == 'u' || palavra[i] == 'A' ||
            palavra[i] == 'E' || palavra[i] == 'I' ||
            palavra[i] == 'O' || palavra[i] == 'U')
        {
            palavra[i] = '*';
        }
    }

    return palavra;
}
//-----------------------------

int main()
{
    std::string palavra;

    //Lendo palavra:
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    //-----------------

    //Mostrando palavra depois de substituir vogais:
    std::cout << "\nResultado: "
              << substituirVogais(palavra);
    //----------------------------------
    
    return 0;
}
