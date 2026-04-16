/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: salário.por
* Data: 09/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* O vendedor recebe seu salário fixo acrescido de comissões de vendas,
calculada a partir do percentual do valor de suas vendas. Ler o salário
fixo do vendedor, o valor de suas vendas e o percentual sobre as vendas.
Calcular e exibir o salário final do vendedor.
*/


programa {
  funcao inicio() {
    real salario, vendas, comissao
    escreva("Calculadora de salários")
    escreva("\nPorfavor insira alguns dados para que possamos calcular o seu salário.")
    escreva("\n\nSalário fixo >>> ")
    leia(salario)
    escreva("Valor das vendas no total >>> ")
    leia(vendas)
    escreva("Qual a porcentagem da sua comissão? >>> -%- ")
    leia(comissao)
    escreva("Salário final >>> R$", (vendas * (comissao / 100)) + salario)
  }
}