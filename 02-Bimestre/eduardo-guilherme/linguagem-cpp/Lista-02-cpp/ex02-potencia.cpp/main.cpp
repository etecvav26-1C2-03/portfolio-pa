//Nome: Eduardo Antônio de Oliveira Bargueiras 
//Turma: 1C2
//Instituição: ETECVAV - Vasco Antônio Venchiarutti
//Enunciado: 
//2) Ler a base e o expoente.
//Calcular a potência usando repetição.
//➡️ Criar uma função para o cálculo.

#include <iostream>

//Função calculando potência
int potencia(int b, int e){
    int r = 1;
		
    for(int i = 0; i != e; i++){
        r *= b;
    }
		
    return r;	
}

int main(int argc, char** argv) {
    int b, e;
	//Lê numero
    std::cout << "Digite o valor da base: ";
    std::cin >> b;
	
    std::cout << "Agora insira o valor do expoente: ";
    std::cin >> e;
    //----------
    
    //Laço para fazer a potência
    for(int i = 1; i <= e; i++){
        
        int resultado = potencia(b, i); 
        std::cout << resultado << std::endl;
    }
	
    return 0;
}
