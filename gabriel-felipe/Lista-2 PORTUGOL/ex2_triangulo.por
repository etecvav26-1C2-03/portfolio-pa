	/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: triângulo.por
* Data: 02/04/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
* Ler três números e verificar se eles formam um triângulo. 
* Caso formem, identificar se é:
*Equilátero (todos os lados iguais)
Isósceles (dois lados iguais)
Escaleno (todos os lados diferentes)

*/
programa
{
	funcao inicio ()
	{
	   inteiro n1, n2, n3

	   escreva ("qual o primeiro número? ")
	   leia (n1)
	   escreva ("qual o segundo número? ")
	   leia (n2)
	   escreva ("qual o terceiro número? ")
	   leia (n3)
	   
	    limpa()
	    
	   se (n1 < n2 + n3 e n2 < n1 + n3 e n3 < n1 + n2) {
	   	escreva("é um triângulo")

		   se (n1 == n2 e n1 == n3 e n2 == n3) {
		   	escreva (" equilátero")
		   }
               senao se (n1 == n2 ou n1 == n3 ou n2 == n3) {
		   	escreva (" isósceles")
		   }
		     senao se (n1 != n2 e n1 != n3 e n2 != n3) {
		   	escreva (" escaleno")
		   }
		   
	   }
	  
	   senao
	   escreva ("não é um triângulo")
	}
} 
