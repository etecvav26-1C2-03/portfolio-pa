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
		real A, B, C
		
		escreva("====================================================================\n                     CALCULADORA DE TRIÂNGULOS\n====================================================================")
		escreva("\nPara começarmos informe os seguintes dados para verificarmos se é um triângulo ou não.\n\n====================================================================\nLado A >>> ")
		leia(A)
		escreva("Lado B >>> ")
		leia(B)
		escreva("Lado C >>> ")
		leia(C)
		escreva("====================================================================")
		se(A + B > C e A + C > B e B + C > A)
		{ 
			escreva("\n\n====RESULTADOS====\n")
			escreva("É um triângulo?\n- Sim\n")
			se (A == B e B == C)
			{
				escreva("==================\nQual o tipo do triângulo?\n- Equilátero\n==================\n")
			}
			senao se (A == B ou B == C ou A == C)
			{
				escreva("==================\nQual o tipo do triângulo?\n- Isósceles\n==================\n")
			}
			senao
			{
				escreva("==================\nQual o tipo do triângulo?\n- Escaleno\n==================\n")
			}
		}
		senao
		{
			escreva("\n====RESULTADOS====\n")
			escreva("É um triângulo?\n- Não\n==================")
		}
	}
}
