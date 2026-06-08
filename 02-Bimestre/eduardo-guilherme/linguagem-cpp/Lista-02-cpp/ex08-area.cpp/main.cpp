#include <iostream>

//Função para ver a área do círculo.
double area(double raio){
    return (raio * raio) * 3.14;
}
//----------------

int main() {
    double r1, r2, r3, r4, r5, areaf;

    //Lendo o valor de raio de cada um dos circulos.
    std::cout << "Digite o raio de 5 circulos (em centimetros/cm):\n\nR1>> ";
    std::cin >> r1;

    std::cout << "R2>> ";
    std::cin >> r2;

    std::cout << "R3>> ";
    std::cin >> r3;

    std::cout << "R4>> ";
    std::cin >> r4;

    std::cout << "R5>> ";
    std::cin >> r5;
    //-----------------------

    //Resultado da soma das áreas:
    areaf = area(r1) + area(r2) + area(r3) + area(r4) + area(r5);

    std::cout << "\nSoma das areas dos 5 circulos:\n\n>> " << areaf;
    //----------------------------
    
    return 0;
}
