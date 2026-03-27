/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: cavalos.por
* Data: 12/03/2026
* Autores: Guilherme Miguel Rodrigues Pereira Lakonski
* Eduardo Antonio de Oliveira Bargueiras
* Descrição: 
* O Haras Cavalos Brilhantes compra cavalos com frequência. Ler a quantidade de cavalos
* adquiridos recentemente, calcular a quantidade de ferraduras necessárias para os novos cavalos e exibir
* a quantidade de novos cavalos e sua respectiva quantidade de ferraduras.
*/
programa 
{
	funcao inicio() {
		
		inteiro cavalos, ferraduras
		escreva("Calculadora de Ferraduras:\n")
		escreva("Para começarmos digite o seguinte dado sobre a compra:\n\n")
		escreva("Quantos cavalos foram adquiridos?\n>>>")
		leia(cavalos)
		ferraduras = cavalos * 4
		escreva("\nQuantidade de novos cavalos:\n>>>  ", cavalos)
		escreva("\nQuantidade de ferraduras necessárias para esses cavalos:\n>>>  ", ferraduras)
	}
}

