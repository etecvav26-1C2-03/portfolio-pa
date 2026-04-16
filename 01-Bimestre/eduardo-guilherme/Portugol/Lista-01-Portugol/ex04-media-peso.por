/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo:media-de-peso.por
* Data: 12/03/2026
* Autor: Guilherme Miguel Rodrigues Pereira Lakonski
* Descrição: 
* Ler 4 notas, calcular a média ponderada com os pesos 1, 2, 3 e 4
respectivamente e exibir as notas e o resultado da média
*/
programa {
	funcao inicio() {

		real n1, n2, n3, n4, media

		escreva("Digite a nota 1 (peso 1): ")
		leia(n1)
		escreva("Digite a nota 2 (peso 2): ")
		leia(n2)
		escreva("Digite a nota 3 (peso 3): ")
		leia(n3)
		escreva("Digite a nota 4 (peso 4): ")
		leia(n4)

		media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 10

		escreva("\n--- Notas Informadas ---")
		escreva("\nNota 1: ", n1, "\nNota 2: ", n2, "\nNota 3: ", n3, "\nNota 4: ", n4)
		escreva("\n\nMédia Ponderada: ", media)
		escreva("\n---------------------------")
	}
}