		/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Data: 05/03/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* O vendedor recebe seu salário fixo acrescido de comissões de vendas,
calculada a partir do percentual do valor de suas vendas. Ler o salário
fixo do vendedor, o valor de suas vendas e o percentual sobre as vendas.
Calcular e exibir o salário final do vendedor.
*/



programa {
  funcao inicio() {
    real fixo, vendas, comissao
    escreva("Calculador de Renda: \n")
    escreva("salário fixo: ")
    leia(fixo)
    escreva("valor das vendas: ")
    leia(vendas)
    escreva("porcentagem de comissão (%): ")
    leia(comissao)
    escreva("salário resultante: R$", (vendas * (comissao / 100)) + fixo)
  }
}
