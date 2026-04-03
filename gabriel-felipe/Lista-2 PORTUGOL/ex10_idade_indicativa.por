	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: idade_indicativa.por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler a classificação indicativa de um filme e identificar sua categoria, de acordo com as seguintes faixas:

Até 10 anos → Infantil
De 11 a 14 anos → Infantojuvenil
De 15 a 17 anos → Juvenil
Acima de 17 anos → Adulto

*/
programa
{
	funcao inicio ()
	{
    inteiro idade
    cadeia indicacao
    leia(idade)
    indicacao
    se (idade <= 10) {
      indicacao = "Infantil"
    }
    senao se (idade <= 14) {
      indicacao = "Infantojuvenil"
    }
    senao se (idade <= 17) {
      indicacao = "Juvenil"
    }
    senao {
      indicacao = "Adulto"
    }
    escreva(indicacao)
	}
} 