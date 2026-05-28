#include <iostream>
using namespace std;

bool impar(int numero)
{
    return numero % 2 == 1;
}

int main()
{
    int numero;
    int soma = 0;

    cout << "Digite um numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++)
    {
        if(impar(i))
        {
            soma += i;

            cout << i;

            
            if(i + 2 <= numero)
            {
                cout << " + ";
            }
        }
    }

    cout << " = " << soma << endl;

    return 0;
}
