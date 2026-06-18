
//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado:
//12) Ler 15 números em um vetor.
//Contar e exibir:
//Quantidade de pares
//Quantidade de ímpares

#include <iostream>
using namespace std;

int main() {
    int v[15];
    int pares = 0, impares = 0;

    for(int i = 0; i < 15; i++) {
        cin >> v[i];

        if(v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    return 0;
}
