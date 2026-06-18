//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado: 
//11) Ler 10 números em um vetor.
Substituir números negativos por zero.
Exibir o vetor.

#include <iostream>
using namespace std;

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        cin >> v[i];

        if(v[i] < 0) {
            v[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
