#include <iostream>

int soma(int n1, int n2){
	int conta = n1 + n2;
	
	return conta;
}

int subtracao(int n1, int n2){
	int conta = n1 - n2;
	
	return conta;
}




int main(int argc, char** argv) {
	int n1, n2, resultado_soma, resultado_subtracao, resultado_mutiplicacao, resultado_divisao;
	
	std::cout << "Insira dois numeros de valor INTEIRO para a calculadora:\n\nN1 >> ";
	std::cin >> n1;
	
	std::cout << "\nN2 >> ";
	std::cin >> n2;
	
	resultado_soma = soma(n1, n2);
	resultado_subtracao = subtracao(n1, n2);
	
	std::cout << "\n------ RESULTADOS ------\n\n" << "Soma:\n>> ";
	
	std::cout << n1 << " + " << n2 << " = " << resultado_soma << "\n\nSubtracao:\n>> ";
	std::cout << n1 << " - " << n2 << " = " << resultado_subtracao;

	return 0;
}

