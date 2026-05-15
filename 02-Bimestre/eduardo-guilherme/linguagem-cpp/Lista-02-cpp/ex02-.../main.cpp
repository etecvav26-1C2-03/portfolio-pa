#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int b, e, r;
	
	cout << "Digite o valor da base:";
	cin >> b;
	
	cout << "Agora insira o valor do expoente:";
	cin >> e;
	
	for (int i = 1;i == e;i++){
		r *= b;
		cout << r << endl;
	}
	
	return 0;
}
