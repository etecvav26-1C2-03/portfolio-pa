/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: desconto.por
* Data: 07/04/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
*Ler o valor de uma compra e calcular o desconto de acordo com as seguintes regras:
*
Menor que R$100 → sem desconto
Entre R$100 e R$500 → 10% de desconto
Acima de R$500 → 20% de desconto
*/
programa
{
	funcao inicio ()
	{
        real valor

	   escreva("qual o valor da compra?  ")
	   leia(valor)

	   se (valor < 100)
	   escreva ("Ficou ", valor)

	   senao se (valor >= 100 e valor <= 500){
	   	escreva ("Valor inicial ", valor)
	   	escreva ("\nFicou Com Desconto: ", valor - (valor * 0.10))
	   }
	   senao se (valor > 500){
	   	escreva ("Valor inicial ", valor)
	   	escreva ("\nFicou Com Desconto: ", valor - (valor * 0.20))
	   }	
	}
}
