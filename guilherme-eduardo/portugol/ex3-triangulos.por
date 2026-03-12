/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: area de um triangulo
* Data: 06/03/2026
* Autor: Guilherme Miguel Rodrigues Peireira Lakonski 
* Descrição: Ler a base e altura de um triângulo. Calcular e exibir a área do triângulo
sabendo que área = base * altura / 2.
*/
programa
{
	funcao inicio()
	{
		
		real base, altura, area

		escreva("Digite o valor da base do triângulo: ")
		leia(base)

		escreva("Digite o valor da altura do triângulo: ")
		leia(altura)

		area = (base * altura) / 2

		
		escreva("\n___Cálculo da Área___")
		escreva("\nBase: ", base)
		escreva("\nAltura: ", altura)
		escreva("\nÁrea total: ", area)
		escreva("\n______________________\n")
	}
