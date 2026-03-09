/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: trapézio.por
* Data: 09/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* Ler a base menor, a base maior e a altura. Calcular e mostrar a área de um trapézio: 
* (base menor + base maior) + altura / 2.
* 
*/

programa
{
	
	funcao inicio()
	{
		real B, b, h
		escreva("Calculadora de área de trapézios!\n")
		escreva("Olá, para calcularmos porfavor insira os seguintes dados do trapézio>>>")
		escreva("\n\nBase maior>")
		leia(B)
		escreva("Base menor>")
		leia(b)
		escreva("Altura>")
		leia(h)
		escreva("\nÁrea do trapézio>>>", ((B+b) + h) /2)
	}
}
