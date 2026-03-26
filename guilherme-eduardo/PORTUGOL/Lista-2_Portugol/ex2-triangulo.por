/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: triangulo.por
* Data: 26/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* Ler três números e verificar se eles formam um triângulo. Caso formem, identificar se é:
*Equilátero (todos os lados iguais)
*Isósceles (dois lados iguais)
*Escaleno (todos os lados diferentes)
*/

programa
{
	
	funcao inicio()
	{
		real lado1, lado2, lado3
		escreva("====================================================================\n                     CALCULADORA DE TRIÂNGULOS\n====================================================================")
		escreva("\nPara começarmos informe os seguintes dados para verficarmos se é um triângulo ou não.\n\n====================================================================\nLado 1 >>> ")
		leia(lado1)
		escreva("Lado 2 >>> ")
		leia(lado2)
		escreva("Lado 3 >>> ")
		leia(lado3)
		escreva("====================================================================")
		se((lado1 + lado2 > lado3) e (lado1 + lado3 > lado2) e (lado2 + lado3 > lado1)){ 
			escreva("\nIsso é um triângulo")
		}
	
	}
}
