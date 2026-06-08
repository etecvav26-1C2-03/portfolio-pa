#include <iostream>

//Funções de cálculo:

//Soma
int soma(int n1, int n2){
	int conta = n1 + n2;
	
	return conta;
}

//Subtração
int subtracao(int n1, int n2){
	int conta = n1 - n2;
	
	return conta;
}

//Multiplicação
int multiplicacao(int n1, int n2){
	int conta = n1 * n2;
	
	return conta;
}

//Divisão
float divisao(int n1, int n2){
	float conta = (float)n1 / n2;
	
	return conta;
}

int main(int argc, char** argv) {
	int n1, n2, resultado_soma, resultado_subtracao, resultado_multiplicacao;
	float resultado_divisao;
	
	//Lendo valores:
	std::cout << "Insira dois numeros de valor INTEIRO para a calculadora:\n\nN1 >> ";
	std::cin >> n1;
	
	std::cout << "\nN2 >> ";
	std::cin >> n2;
	//-------------

	//Resultados calculados nas funções:
	resultado_soma = soma(n1, n2);
	resultado_subtracao = subtracao(n1, n2);
	resultado_multiplicacao = multiplicacao(n1, n2);
	resultado_divisao = divisao(n1, n2);
	
	std::cout << "\n------ RESULTADOS ------\n\n" << "Soma:\n>> ";
	
	std::cout << n1 << " + " << n2 << " = " << resultado_soma << "\n\nSubtracao:\n>> ";
	std::cout << n1 << " - " << n2 << " = " << resultado_subtracao << "\n\nMultiplicacao:\n>> ";
	
	std::cout << n1 << " * " << n2 << " = " << resultado_multiplicacao << "\n\nDivisao:\n>> ";
	std::cout << n1 << " / " << n2 << " = " << resultado_divisao << "\n\n------------------------";
	//----------------------------------------------
	
	return 0;
}


