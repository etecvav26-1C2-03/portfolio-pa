#include <iostream>
using namespace std;

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    cout << "Terceiro menor: " << v[2];

    return 0;
}
