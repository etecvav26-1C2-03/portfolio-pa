//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado:
//13) Ler 20 letras em um vetor.
//Ler uma letra e contar quantas vezes ela aparece.

#include <iostream>
using namespace std;

int main() {
    char letras[20];
    char letra;
    int contador = 0;

    for(int i = 0; i < 20; i++) {
        cin >> letras[i];
    }

    cin >> letra;

    for(int i = 0; i < 20; i++) {
        if(letras[i] == letra) {
            contador++;
        }
    }

    cout << contador;

    return 0;
}
