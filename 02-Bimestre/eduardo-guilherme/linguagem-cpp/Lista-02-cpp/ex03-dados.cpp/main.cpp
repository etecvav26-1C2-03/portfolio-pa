//Nome: Eduardo Antônio de Oliveira Bargueiras 
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado: 
//3) Ler o sexo e a altura.
//Calcular o peso ideal:
//Masculino: 72,7 × altura - 58
//Feminino: 62,1 × altura - 44,7
//➡️ Criar uma função para cada caso.

#include <iostream>

//Função masculino
float masculino(float altura){
	float peso_ideal;
	
	peso_ideal = 72.7*altura-58;
	
	return peso_ideal;
	
}

//Função feminino
float feminino(float altura){
	float peso_ideal;
	
	peso_ideal = 62.1*altura-44.7;
	
	return peso_ideal;
	
}

int main(int argc, char** argv) {
	float altura;
	int genero;
	float resultado = 0;
	
	//Lendo valores
	std::cout << "Para calcularmos o seu peso ideal insira sua ALTURA(ex: 1.32 ou 1.71):" << "\n" << "\n" << ">> ";
	std::cin >> altura;
	
	std::cout << "\n" << "Insira tambem o seu genero:" << "\n"<< "\n" << "1 - Masculino" << "\n" << "2 - Feminino" << "\n" << "\n" << ">> ";
	std::cin >> genero;
	//---------------
	
	
	//Resultado dependendo de qual for o gênero:

	//Masculino
	if (genero == 1){
		resultado = masculino(altura);
		std::cout << "\nSeu peso ideal:" << "\n" << "\n" << ">> " << resultado << "kg";
	}
	
	//Feminino
	if (genero == 2){
		resultado = feminino(altura);
		std::cout << "\nSeu peso ideal:" << "\n" << "\n" << ">> " << resultado << "kg";
	}
	
	return 0;
}
