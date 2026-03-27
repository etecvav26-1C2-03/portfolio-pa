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
		inteiro idadeAnos, idadeMeses, idadeDias

		escreva("Digite o seu nome: ")
		leia(nome)
		escreva("Digite a sua idade (em anos): ")
		leia(idadeAnos)
		idadeMeses = idadeAnos * 12
		idadeDias = idadeAnos * 365
		escreva("\nResultados:")
		escreva("\nNome: ", nome)
		escreva("\nSua idade em anos: ", idadeAnos, " anos")
		escreva("\nSua idade em meses: ", idadeMeses, " meses")
		escreva("\nSua idade em dias: ", idadeDias, " dias")
	}
}

