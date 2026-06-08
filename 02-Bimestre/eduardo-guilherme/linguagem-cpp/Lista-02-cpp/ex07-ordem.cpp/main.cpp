//Nome: Eduardo Antônio de Oliveira Bargueiras 
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado: 
//7) Ler 5 números.
//Verificar se estão:
//Em ordem crescente
//Em ordem decrescente
//Não ordenados
//➡️ Criar uma função para essa análise.

#include <iostream>
#include <string>

//Função para verificar a ordem dos números:
std::string comparacao(int n1, int n2, int n3, int n4, int n5){
	//Peneração Crescente
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
	//---------------------------

	//Peneração Decrescente
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
	//------------------------------
	//Caso não seja nenhum dos casos ele retorna normalmente.
	return "Nao ordenados.";
}
//---------------------------

int main() {
    int n1, n2, n3, n4, n5;
    std::string valor;
    
	//Lendo numeros:
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
	//-------------------------
    
    //Resultados da função:
	valor = comparacao(n1, n2, n3, n4, n5);
    
    std::cout << "\n------ RESULTADOS ------\n\nOs numeros estavam em ordem:\n\n>> " << valor;
	//-----------------------

    return 0;
}
