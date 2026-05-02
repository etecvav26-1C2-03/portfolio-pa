#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numero, maior, menor;
	
	for(int i = 0;i < 10;i++){
		cout << i+1 << "-Escreva um numero " << ":";
		cin >> numero;
		
		if(i == 0){
			maior = numero;
			menor = numero;
		}
		else{
		if(numero > maior){
			maior = numero;
		}
		
		if(numero < menor){
			menor = numero;
		}
	}
		
	}
	
	
	
	cout << "Maior numero = " << maior << endl;
	cout << "Menor numero = " << menor;
	
	return 0;
}
