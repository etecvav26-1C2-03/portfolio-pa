#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int limite, multiplicador;
	
	cout << "Qual o limite da multiplicacao?" << endl << "-";
	cin >> limite;
	
	cout << "Qual o numero que vai ser multiplicado?" << endl << "-";
	cin >> multiplicador;
	
	cout << "Multiplos de " << multiplicador << " contando do 1 ate " << limite << ":" << endl;
	
	for(int i = 1;i <= limite;i++){
		if(i % multiplicador == 0){
			cout << i << endl;	
		}
	}
	
	return 0;
}
