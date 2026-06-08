#include <iostream>
#include <string>

std::string comparacao(int n1, int n2, int n3, int n4, int n5){
	if (n5 > n4){
		if(n4 > n3){
			if(n3 > n2){
				if(n2 > n1){
					return "Crescente.";
				}
				
				return "Nao ordenados.";	
			}
			
			return "Nao ordenados.";
		}
		
		return "Nao ordenados.";
	}
	else if (n1 > n2){
		if (n2 > n3){
			if(n3 > n4){
				if (n4 > n5){
					return "Decrescente";
				}
				
				return "Nao ordenados.";
			}
			
			return "Nao ordenados.";
		}
		
		return "Nao ordenados.";
	}
	
	return "Nao ordenados.";
}


int main() {
    int n1, n2, n3, n4, n5;
    std::string valor;
    
    std::cout << "Insira 5 numeros:\n\nN1>> ";
    std::cin >> n1;
    
    std::cout << "N2>> ";
    std::cin >> n2;
    
    std::cout << "N3>> ";
    std::cin >> n3;
    
    std::cout << "N4>> ";
    std::cin >> n4;
    
    std::cout << "N5>> ";
    std::cin >> n5;
    
    valor = comparacao(n1, n2, n3, n4, n5);
    
    std::cout << "\n------ RESULTADOS ------\n\nOs numeros estavam em ordem:\n\n>> " << valor;


    return 0;
}
