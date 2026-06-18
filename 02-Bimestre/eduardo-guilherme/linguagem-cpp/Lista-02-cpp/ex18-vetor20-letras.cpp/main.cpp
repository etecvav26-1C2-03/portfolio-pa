//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado:
//18) Ler 20 letras em um vetor.
//Contar as vogais (a, e, i, o, u)
//Armazenar em um vetor de 5 posições e exibir.

#include <iostream>
using namespace std;

int main() {
    char letras[20];
    int vogais[5] = {0};

    for(int i = 0; i < 20; i++) {
        cin >> letras[i];

        if(letras[i] == 'a')
            vogais[0]++;

        else if(letras[i] == 'e')
            vogais[1]++;

        else if(letras[i] == 'i')
            vogais[2]++;

        else if(letras[i] == 'o')
            vogais[3]++;

        else if(letras[i] == 'u')
            vogais[4]++;
    }

    cout << "a: " << vogais[0] << endl;
    cout << "e: " << vogais[1] << endl;
    cout << "i: " << vogais[2] << endl;
    cout << "o: " << vogais[3] << endl;
    cout << "u: " << vogais[4] << endl;

    return 0;
}
