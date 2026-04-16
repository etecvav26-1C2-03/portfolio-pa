/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: bissexto.por
* Data: 26/03/2026
* Autor: Eduardo Antonio de Oliveira Bargueiras
* Descrição:
* Ler um ano e verificar se ele é bissexto.
*/

programa
{
	
	funcao inicio()
	{
		inteiro ano
		escreva("                        VERIFICADOR DE ANO BISSEXTO")
		escreva("\n\nPara começarmos digite o ano em que deseja verificar.\n>>>")
		leia(ano)
		se((ano % 4 == 0) e (ano % 100 != 0) ou (ano % 400 == 0)){ 
			escreva("O ano informado é um ano bissexto.")
		}senao{ 
			escreva("O ano informado não é um ano bissexto.")
		}
	}
}