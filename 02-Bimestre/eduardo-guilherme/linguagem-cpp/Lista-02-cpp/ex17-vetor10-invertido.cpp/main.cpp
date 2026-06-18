//Nome:Guilherme Miguel Rodrigues Pereira Lakonski
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado:
//17) Ler 10 números em um vetor.
//Criar outro vetor com os sinais invertidos.
//Exibir a soma dos valores positivos dos dois vetores.

#include <iostream>
using namespace std;

int main() {
    int v1[10], v2[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        cin >> v1[i];
        v2[i] = -v1[i];
    }

    for(int i = 0; i < 10; i++) {
        if(v1[i] > 0)
            soma += v1[i];

        if(v2[i] > 0)
            soma += v2[i];
    }

    cout << soma;

    return 0;
}
