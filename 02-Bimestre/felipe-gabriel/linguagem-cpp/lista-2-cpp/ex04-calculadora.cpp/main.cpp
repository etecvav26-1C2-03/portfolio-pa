/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex04.cpp
* Data: 30/05/2026
* Autor: Gabriel Fernandes Barbarini
* Descrição:
* Ler dois números inteiros e calcular adicao, subtracao, multiplicacao e divisao.
* Criar uma função para cada operação.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sum(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int multi(int n1, int n2) { return n1 * n2; }
float divi(int n1, int n2) { return (float)n1 / n2; }

int main() {
    char choice;
    int n1, n2;
    cout << "---- Calculator ----" << endl;
    cout << "choice [+] [-] [*] [/]" << endl;
    cin >> choice >> n1 >> n2;
    
    return 0;
}
