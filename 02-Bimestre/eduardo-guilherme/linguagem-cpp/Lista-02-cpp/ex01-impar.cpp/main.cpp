#include <iostream>

using namespace std;

bool impar(int n){
	return n % 2 == 1;
}

int main(int argc, char** argv) {
	int n1, vfinal;
	
	cout << "Escreva um numero:";
	cin >> n1;
	
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
	
	cout << "=" << vfinal;
	
	return 0;
}
