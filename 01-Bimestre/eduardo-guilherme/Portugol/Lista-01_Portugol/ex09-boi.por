/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: boi.por
* Data: 12/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
*Ler o peso de um boi e o percentual de engorda. Calcular e exibir o novo
peso do boi.
*/


programa {
  funcao inicio() {
    real peso, gordura
    escreva("          --CALCULADORA DE PESO DE BOI--\n")
    escreva("=========================================\nOlá porfavor insira os seguintes dados.\n=========================================")
    escreva("\n\nPeso do boi:\n>>>")
    leia(peso)
    escreva("\nPorcentual de engorda:\n>>>")
    leia(gordura)
    gordura = gordura / 100
    escreva("\nPeso novo do boi:\n>>> ", (peso * gordura) + peso)
  }
}