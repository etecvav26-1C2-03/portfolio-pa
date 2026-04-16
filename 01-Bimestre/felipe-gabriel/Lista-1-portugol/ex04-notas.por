/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: notas.por
* Data: 08/03/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
*Ler 4 notas, calcular a média ponderada com os pesos 1, 2, 3, e 4 
*respectivamente e exibir as notas e o resultado da média.
*/
programa
{
	funcao inicio ()
	{
       real nota1, nota2, nota3, nota4
	  
	  escreva ("qual a sua primeira nota? ")
	  leia (nota1)
	  escreva ("qual a sua segunda nota? ")
	  leia (nota2)
	  escreva ("qual a sua terceira nota? ")
	  leia (nota3)
	  escreva ("qual a sua quarta nota? ")
	  leia (nota4)
	  limpa()
	  escreva ( "sua média é: ", (nota1*1 + nota2*2 + nota3*3 + nota4*4)/10)
       
	}
}
