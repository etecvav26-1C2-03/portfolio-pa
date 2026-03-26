/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: cavalos.por
* Data: 12/03/2026
* Autor: Guilherme Miguel Rodrigues Pereira Lakonski
* Descrição: 
* O Haras Cavalos Brilhantes compra cavalos com frequência. Ler a quantidade de cavalos
* adquiridos recentemente, calcular a quantidade de ferraduras necessárias para os novos cavalos e exibir
* a quantidade de novos cavalos e sua respectiva quantidade de ferraduras.
*/
programa 
{
	funcao inicio() {
		
		inteiro cavalos, ferraduras

		escreva("Digite a quantidade de cavalos adquiridos: ")
		leia(cavalos)
	
		ferraduras = cavalos * 4

		escreva("\n--- Relatório do Haras ---")
		escreva("\nQuantidade de novos cavalos: ", cavalos)
		escreva("\nQuantidade de ferraduras necessárias: ", ferraduras)
	}
}

