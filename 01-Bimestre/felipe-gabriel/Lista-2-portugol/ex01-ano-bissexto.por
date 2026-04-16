	/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ano bissexto.por
* Data: 02/04/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
*Ler um ano e verificar se ele é bissexto. 
*O programa deve exibir o ano informado e indicar se ele é ou não bissexto.
*/
programa
{
	funcao inicio ()
	{
	   inteiro ano

	   escreva("qual o ano? ")
	   leia (ano)

	   se (ano % 4 == 0 e ano % 100 != 0 ou ano % 400 == 0) {	
	   escreva("o ano é bissexto") 
	   }

	   senao 
	   escreva("o ano não é bissexto")
	}
}   
