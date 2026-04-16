	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti
 Arquivo: quadrado-perfeito.por
 Data: 09/04/2026
 Autor: Guilherme Miguel Rodrigues Pereira Lakonski
 Descrição: 
  Ler um número e verificar se ele é um quadrado perfeito.

*/
programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro numero
		real raiz
		inteiro raiz_inteira

		escreva("Digite um número: ")
		leia(numero)

		se (numero < 0)
		escreva("Números negativos não são quadrados perfeitos.")
		senao 
			raiz = mat.raiz(numero, 2.0)
			raiz_inteira = raiz 
		se(raiz_inteira * raiz_inteira == numero)
			{
				escreva("O número ", numero, " é um quadrado perfeito!")
				escreva("\nSua raiz é: ", raiz_inteira)
			}
			senao
			{
				escreva("O número ", numero, " NÃO é um quadrado perfeito.")
			}
		}
	}