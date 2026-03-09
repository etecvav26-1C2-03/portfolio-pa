/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: peso.por
* Data: 09/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* Ler o peso de uma pessoa em quilos, calcular e mostrar o peso em gramas.
*/


programa
{
	
	funcao inicio()
	{
		real kg
		escreva("                     BALANÇA VIRTUAL")
		escreva("\n==============================================================================\nOlá, Seja bem vindo a nossa balança!")
		escreva("\nPor favor digite o seu peso em quilos para que possamos transformar em gramas.")
		escreva("\nOBS: O número digitado deve ser do tipo Inteiro.\n==============================================================================")
		escreva("\nPeso em quilos>>>")
		leia(kg)
		escreva("Peso convertido em gramas: ", kg*1000," Gramas")
		escreva("\n==============================================================================")
	}
}
