	/*
*Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: idade.por
* Data: 07/03/2026
* Autor: gabriel fernandes barbarini 
* Descrição:  Ler o nome e a idade do usuário. Calcular a idade em meses e dias. Exibir
o nome e a idade em anos, meses e dias.*/
programa
{
	funcao inicio()
	{
		inteiro idade
		cadeia nome
		escreva("qual o seu nome?")
		leia(nome)
	     escreva("\nqual a sua idade?")
          leia(idade)
	     escreva ("seu nome é ", nome)
	     escreva ("\nvocê tem ", idade, " anos")
	     escreva ("\nvocê tem ", idade*12, " meses")
          escreva ("\nvocê tem ", idade*365, " dias")
	}

}
