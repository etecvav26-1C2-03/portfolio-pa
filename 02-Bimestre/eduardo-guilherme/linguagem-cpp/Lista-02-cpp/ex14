#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[10], aux;

    for(int i = 0; i < 10; i++) {
        cin >> nomes[i];
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(nomes[i] > nomes[j]) {
                aux = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
