/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: combustivel.por
* Data: 02/04/2026
* Autores Eduardo Antonio de Oliveira Bargueiras e Guilherme Miguel Rodrigues Pereira Lakonski(Fez na minha conta porque estava sem a dele)
* Descrição:
* Ler o preço do etanol e da gasolina e indicar qual combustível é mais vantajoso.
*/

programa
{
	
	funcao inicio()
	{
		real gasolina, etanol
		
		escreva("Qual o preço da gasolina?\n>>>")
		leia(gasolina)
		escreva("\nE qual o preço do etanol?\n>>>")
		leia(etanol)
		
		se(gasolina > etanol) {
			escreva("\n-O etanol é mais vantajoso.")
		}
		
		se(etanol > gasolina) {
			escreva("\n-A gasolina é mais vantajosa.")
		}

		senao{ 
			escreva("\n-Os dois tipos de combustíveis são vantojosos.")
		}
	}
}
