		/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Data: 05/03/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler a base menor, a base maior e a altura. Calcular e mostrar a área de
um trapézio: (base menor + base maior) + altura / 2.
*/

/*
O CAUCULO DO TRAPÉZIO ESTÁ ERRADO
*/


programa {
  funcao inicio() {
    real B, b, h
    escreva("Calculador de área de trapézio: \n")
    escreva("Base maior: ")
    leia(B)
    escreva("Base menor: ")
    leia(b)
    escreva("Altura: ")
    leia(h)
    escreva("a área do seu trapézio é: ", ((B + b) + h) /2)
  }
}
