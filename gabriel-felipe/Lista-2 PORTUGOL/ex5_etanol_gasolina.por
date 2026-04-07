/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: gasolina_etanol.por
* Data: 07/04/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
*Ler o preço do etanol e da gasolina e indicar qual combustível é mais vantajoso.

👉 Regra:

Se o etanol custar até 70% do preço da gasolina → usar etanol
Caso contrário → usar gasolina

*/
programa
{
	funcao inicio ()
	{
      real gasolina, etanol

      escreva ("Qual o preço da gasolina? ")
      leia(gasolina)
      
      escreva ("Qual o preço do etanol? ")
      leia(etanol)
      limpa()
      
      se (etanol <= (gasolina * 70 / 100))
      escreva("o melhor é o etanol")
      
      senao
      escreva("o melhor é a gasolina")
	}
}
