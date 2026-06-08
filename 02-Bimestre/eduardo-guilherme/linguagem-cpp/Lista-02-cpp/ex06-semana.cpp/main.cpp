//Nome: Eduardo Antônio de Oliveira Bargueiras
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado: 
//6) Ler um número.
//Exibir o dia da semana correspondente.
//➡️ Criar uma função para essa verificação.

#include <iostream>
#include <string>

//Função que diz o dia da semana:
std::string semana(int n1){
	if(n1 == 1){
		return "Segunda-Feira.";
	}
	else if(n1 == 2){
		return "Terca-Feira.";
	}
	else if(n1 == 3){
		return "Quarta-Feira.";
	}
	else if(n1 == 4){
		return "Quinta-Feira.";
	}
	else if(n1 == 5){
		return "Sexta-Feira.";
	}
	else if(n1 == 6){
		return "Sabado.";
	}
	else if(n1 == 7){
		return "Domingo.";
	}
	
	return "*Erro... Numero invalido*";
}
//-----------------------

int main() {
    int n1;
    std::string d_semana;

	//Lendo numero:
    std::cout << "Insira um numero (1 a 7):\n\n>> ";
    std::cin >> n1;
	//--------------

	//Resultado do dia da semana:
	d_semana = semana(n1);
	
	std::cout << "\n\nDia da semana correspondente:\n\n>> " << d_semana;
	//------------------------------
   
    return 0;
}
