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
		real ladoA, ladoB, ladoC
		escreva("====================================================================\n                     CALCULADORA DE TRIÂNGULOS\n====================================================================")
		escreva("\nPara começarmos informe os seguintes dados para verficarmos se é um triângulo ou não.\n\n====================================================================\nLado A >>> ")
		leia(ladoA)
		escreva("Lado B >>> ")
		leia(ladoB)
		escreva("Lado C >>> ")
		leia(ladoC)
		escreva("====================================================================")
		se((ladoA + ladoB > ladoC) e (ladoA + ladoC > ladoB) e (ladoB + ladoC > ladoA)){ 
			escreva("\n====RESULTADOS====")
			escreva("\n\nÉ um triângulo?\n- Sim")
		}senao{ 
			escreva("\n====RESULTADOS====")
			escreva("\n\nÉ um triângulo?\n- Não")
		}
	
	}
}
