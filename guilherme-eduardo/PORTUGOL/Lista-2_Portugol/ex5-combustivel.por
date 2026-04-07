/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: combustivel.por
* Data: 02/04/2026
* Autores Eduardo Antonio de Oliveira Bargueiras e Guilherme Miguel Rodrigues Pereira Lakonski(Fez na minha conta porque estava sem a dele)
* Descrição:
* Ler o preço do etanol e da gasolina e indicar qual combustível é mais vantajoso.
* Regra:
* Se o etanol custar até 70% do preço da gasolina → usar etanol
* Caso contrário → usar gasolina
*/

programa
{
	
	funcao inicio()
	{
	real gasolina, etanol

	escreva("Qual o preço da gasolina\nR$:")
	leia(gasolina)
	
	escreva("Qual o preço do etanol?\nR$:")
	leia(etanol)

	se(etanol <= (gasolina * 0.7)) { 
		escreva("Recomenda-se o uso do Etanol.") 
	}
	
	senao{ 
		escreva("Recomenda-se o uso da Gasolina.")		
	}
	}
}
