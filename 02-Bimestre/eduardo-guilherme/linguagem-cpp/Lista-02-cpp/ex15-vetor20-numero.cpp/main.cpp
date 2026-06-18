//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado:
//15) Ler 20 números em um vetor.
//Exibir o índice do primeiro número negativo.

#include <iostream>
using namespace std;

int main() {
    int v[20];

    for(int i = 0; i < 20; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < 20; i++) {
        if(v[i] < 0) {
            cout << i;
            break;
        }
    }

    return 0;
}
