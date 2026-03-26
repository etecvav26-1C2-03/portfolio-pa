/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: compra.por
* Data: 26/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* Ler o valor de uma compra e calcular o desconto de acordo com as seguintes regras:
* Menor que R$100 → sem desconto
* Entre R$100 e R$500 → 10% de desconto
* Acima de R$500 → 20% de desconto
* Ao final, exibir o valor após o desconto.
*/

programa
{
	
	funcao inicio()
	{
		real v_compra, desconto10, v_final, desconto20
		escreva("=================================================================\n                   CALCULADORA DE DESCONTOS\n=================================================================")
		escreva("\n\nPara calcularmos o desconto insira o valor da compra efetuada.\n>>> ", "R$:")
		leia(v_compra)
		desconto10=v_compra*0.1
		se(v_compra < 100){
			escreva("\n=================================================================\nVocê conseguiu um desconto de 10% que será aplicado ao valor.")
			escreva("\n\nA compra ficara no seguinte preço\n>>>", v_compra + desconto10)
		}
	}
}
