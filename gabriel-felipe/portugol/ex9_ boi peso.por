		/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Data: 05/03/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler o peso de um boi e o percentual de engorda. Calcular e exibir o novo
peso do boi.
*/



programa {
  funcao inicio() {
    real peso, gordura
    escreva("calculador de engordamento de boi: \n")
    escreva("peso do boi: ")
    leia(peso)
    escreva("porcentual de engorda: ")
    leia(gordura)
    gordura = gordura / 100
    escreva("peso novo > ", (peso * gordura) + peso)
  }
}
