// Exercício 3 - C++
// Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.

#include <iostream>
using namespace std;

int main() {
	int numero;
	int soma = 0;
	
	cout << "NUMERO:";
	cin >> numero;
	soma += numero;
	cout << "VALOR ATUAL:" << soma << endl;
	
	
	while(numero >= 0){
		cout << "NUMERO:";
		cin >> numero;
		soma += numero;
		cout << "VALOR ATUAL:" << soma << endl;
	}
	
    return 0;
}
