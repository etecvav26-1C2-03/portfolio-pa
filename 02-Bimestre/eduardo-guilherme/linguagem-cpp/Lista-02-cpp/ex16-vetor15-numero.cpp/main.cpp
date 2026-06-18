#include <iostream>
using namespace std;

int main() {
    int v[15];

    for(int i = 0; i < 15; i++) {
        cin >> v[i];
    }

    int menor = 0;
    int maior = 0;

    for(int i = 1; i < 15; i++) {
        if(v[i] < v[menor])
            menor = i;

        if(v[i] > v[maior])
            maior = i;
    }

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;

    return 0;
}
