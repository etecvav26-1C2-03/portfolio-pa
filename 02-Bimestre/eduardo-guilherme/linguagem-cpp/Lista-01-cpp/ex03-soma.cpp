// Exercício 3 - CPP
// Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.

#include <iostream>
using namespace std;

int main() {
	int numero;
	int soma = 0;
	
	cout << "NUMERO:";
	cin >> numero;
	
	while(numero >= 0){
		soma += numero;
		
		cout << "NUMERO:";
		cin >> numero;
	}

	cout << "SOMA FINAL: " << soma << endl;
	
    return 0;
}
