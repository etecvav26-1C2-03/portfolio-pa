/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo:abastecimento.por
* Data: 06/03/2026
* Autor: Guilherme Miguel Rodrigues Peireira Lakonski 
* DESCRIÇAO:O motorista de aplicativo abastece o tanque do seu carro com um
determinado valor em reais. Ler o preço do litro de combustível e o valor
que pretende abastecer. Calcular a quantidade de litro no abastecimento
e exibir os dados lidos e o valor calculado.
*/
programa {
  funcao inicio() {

    real preco_litro, valor_abastecer, litros_totais

    escreva("Digite o preço do litro do combustível: ")
    leia(preco_litro)

    escreva("Digite o valor que deseja abastecer (R$): ")
    leia(valor_abastecer)

    litros_totais = valor_abastecer / preco_litro
	
    escreva("\n--- Dados do Abastecimento ---")
    escreva("\nPreço do litro: R$ ", preco_litro)
    escreva("\nValor abastecido: R$ ", valor_abastecer)
    escreva("\nQuantidade de litros no tanque: ", litros_totais, " litros")
  }
}
