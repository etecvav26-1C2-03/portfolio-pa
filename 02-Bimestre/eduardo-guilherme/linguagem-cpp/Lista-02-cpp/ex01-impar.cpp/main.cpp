#include <iostream>

using namespace std;
// Função com return true para impar
bool impar(int n){
	return n % 2 == 1;
}

int main(int argc, char** argv) {
	int n1, vfinal;
	
	//Lê numero
	cout << "Escreva um numero:";
	cin >> n1;
	
	//Verifica
	for(int i = 0;i <= n1;i++){
		if(impar(i)){
			vfinal += i;
			if(i + 2 <= n1){
				cout << i << "+";
			}else{
				cout << i;
			}
		}
	}
	//Resultado
	cout << "=" << vfinal;
	
	return 0;
}
