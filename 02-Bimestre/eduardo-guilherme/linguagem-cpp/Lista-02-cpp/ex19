#include <iostream>
using namespace std;

int main() {
    int v[10];
    int pares[10], impares[10], soma[10];
    int p = 0, im = 0;

    for(int i = 0; i < 10; i++) {
        cin >> v[i];

        if(v[i] % 2 == 0) {
            pares[p] = v[i];
            p++;
        } else {
            impares[im] = v[i];
            im++;
        }
    }

    for(int i = 0; i < p - 1; i++) {
        for(int j = i + 1; j < p; j++) {
            if(pares[i] > pares[j]) {
                int aux = pares[i];
                pares[i] = pares[j];
                pares[j] = aux;
            }
        }
    }

    for(int i = 0; i < im - 1; i++) {
        for(int j = i + 1; j < im; j++) {
            if(impares[i] > impares[j]) {
                int aux = impares[i];
                impares[i] = impares[j];
                impares[j] = aux;
            }
        }
    }

    int menor;

    if(p < im)
        menor = p;
    else
        menor = im;

    for(int i = 0; i < menor; i++) {
        soma[i] = pares[i] + impares[i];
    }

    cout << "Pares:" << endl;
    for(int i = 0; i < p; i++)
        cout << pares[i] << " ";

    cout << endl;

    cout << "Impares:" << endl;
    for(int i = 0; i < im; i++)
        cout << impares[i] << " ";

    cout << endl;

    cout << "Soma:" << endl;
    for(int i = 0; i < menor; i++)
        cout << soma[i] << " ";

    return 0;
}
