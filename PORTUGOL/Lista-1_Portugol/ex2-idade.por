/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo:idade.por
* Data: 06/03/2026
* Autores: Guilherme Miguel Rodrigues Peireira Lakonski 
* Eduardo Antonio de Oliveria Bargueiras
* Descrição:Ler o nome e a idade do usuário. Calcular a idade em meses e dias. Exibir
o nome e a idade em anos, meses e dias. 
*/
programa
{
	funcao inicio()
	{
		cadeia nome
		inteiro anos, meses, dias

		escreva("Calculadora de idade(anos, meses e dias)\n\n")
		escreva("Para começar insira os seguintes dados:\n")
		escreva("Digite o seu nome: ")
		leia(nome)
		escreva("Digite a sua idade (em anos): ")
		leia(anos)
		meses = anos * 12
		dias = anos * 365
		escreva("\nResultados:")
		escreva("\nSeu Nome: ", nome)
		escreva("\nSua idade em anos: ", anos, " anos")
		escreva("\nSua idade em meses: ", meses, " meses")
		escreva("\nSua idade em dias: ", dias, " dias")
	}
}

