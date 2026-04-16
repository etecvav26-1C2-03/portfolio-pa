		/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Data: 05/03/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* O caixa do supermercado recebe uma certa quantidade de moedas por
dia. Ler a quantidade de moedas recebidas de acordo com cada um dos
valores 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Calcular e
exibir o valor recebido de cada um dos tipos de moeda e a soma total em
moedas.
*/



programa {
  funcao inicio() {
    inteiro qtd[6] 
    real valores[6], somaTotal = 0

    escreva("Soma de moedas: \n")

    escreva("Qtd de 1 centavo: ")
    leia(qtd[0])
    escreva("Qtd de 5 centavos: ")
    leia(qtd[1])
    escreva("Qtd de 10 centavos: ")
    leia(qtd[2])
    escreva("Qtd de 25 centavos: ")
    leia(qtd[3])
    escreva("Qtd de 50 centavos: ")
    leia(qtd[4])
    escreva("Qtd de 1 real: ")
    leia(qtd[5])

    valores[0] = qtd[0] * 0.01
    valores[1] = qtd[1] * 0.05
    valores[2] = qtd[2] * 0.10
    valores[3] = qtd[3] * 0.25
    valores[4] = qtd[4] * 0.50
    valores[5] = qtd[5] * 1.00

    /* loop para soma total */
    para(inteiro i = 0; i < 6; i++) {
      somaTotal = somaTotal + valores[i]
    }

    escreva("\n1 centavo:  R$ ", valores[0])
    escreva("\n5 centavos: R$ ", valores[1])
    escreva("\n10 centavos: R$ ", valores[2])
    escreva("\n25 centavos: R$ ", valores[3])
    escreva("\n50 centavos: R$ ", valores[4])
    escreva("\n1 real:      R$ ", valores[5])
    escreva("\n-----------------------------")
    escreva("\nSOMA TOTAL:  R$ ", somaTotal, "\n")
  }
}
