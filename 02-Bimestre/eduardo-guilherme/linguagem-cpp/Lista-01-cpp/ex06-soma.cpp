// Exercício-6 c++

#include <iostream>
using namespace std;

int main() {
    int n;
    int soma = 0;
    long long multiplicacao = 1;

    while (soma <= 100) {
        cout << "Escreva um numero: ";
        cin >> n;

        if (n <= 0) {
            cout << "Digite apenas numeros positivos!" << endl;
            continue;
        }

        soma += n;
        multiplicacao *= n;
    }

    cout << "A soma ultrapassou 100, fim da leitura." << endl;
    cout << "A multiplicacao dos numeros foi: " << multiplicacao << endl;

    return 0;
}
