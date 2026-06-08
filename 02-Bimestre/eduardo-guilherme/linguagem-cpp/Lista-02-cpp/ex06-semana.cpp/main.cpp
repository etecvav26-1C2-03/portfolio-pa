#include <iostream>
#include <string>

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

int main() {
    int n1;
    std::string d_semana;

    std::cout << "Insira um numero (1 a 7):\n\n>> ";
    std::cin >> n1;
	
	d_semana = semana(n1);
	
	std::cout << "\n\nDia da semana correspondente:\n\n>> " << d_semana;
	
   
    return 0;
}
