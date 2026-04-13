/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: supermercado.por
* Data: 12/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
*O caixa do supermercado recebe uma certa quantidade de moedas por
dia. Ler a quantidade de moedas recebidas de acordo com cada um dos
valores 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Calcular e
exibir o valor recebido de cada um dos tipos de moeda e a soma total em
moedas.
*/


programa {
  funcao inicio() {

    inteiro qtn_c1, qtn_c5, qtn_c10, qtn_c25, qtn_c50, qtn_r1
    real c1, c5, c10, c25, c50, r1
    real v1, v5, v10, v25, v50, vr1, total

    c1 = 0.01
    c5 = 0.05
    c10 = 0.10
    c25 = 0.25
    c50 = 0.50
    r1 = 1

    escreva("=========================================\n         Calculadora de Moedas\n=========================================")

    escreva("\n\n-Quantas moedas de 1 centavo foram recebidas hoje?\n >>> ")
    leia(qtn_c1)

    escreva("\n-Quantas moedas de 5 centavos foram recebidas hoje?\n >>> ")
    leia(qtn_c5)

    escreva("\n-Quantas moedas de 10 centavos foram recebidas hoje?\n >>> ")
    leia(qtn_c10)

    escreva("\n-Quantas moedas de 25 centavos foram recebidas hoje?\n >>> ")
    leia(qtn_c25)

    escreva("\n-Quantas moedas de 50 centavos foram recebidas hoje?\n >>> ")
    leia(qtn_c50)

    escreva("\n-Quantas moedas de 1 real foram recebidas hoje?\n >>> ")
    leia(qtn_r1)

    
    v1 = qtn_c1 * c1
    v5 = qtn_c5 * c5
    v10 = qtn_c10 * c10
    v25 = qtn_c25 * c25
    v50 = qtn_c50 * c50
    vr1 = qtn_r1 * r1

    total = v1 + v5 + v10 + v25 + v50 + vr1

    
    escreva("\n\n================================")
    escreva("\n          RESULTADO")
    escreva("\n================================")

    escreva("\nMoedas de 1 centavo: R$ ", v1)
    escreva("\nMoedas de 5 centavos: R$ ", v5)
    escreva("\nMoedas de 10 centavos: R$ ", v10)
    escreva("\nMoedas de 25 centavos: R$ ", v25)
    escreva("\nMoedas de 50 centavos: R$ ", v50)
    escreva("\nMoedas de 1 real: R$ ", vr1)

    escreva("\n-----------------------------------------")
    escreva("\nTotal de moedas: ", qtn_c1+qtn_c5+qtn_c10+qtn_c25+qtn_c50+qtn_r1,"\n-----------------------------------------")
    escreva("\n\n\n-----------------------------------------\nValor total de todas as moedas: R$ ", total, "\n-----------------------------------------")

  }
}