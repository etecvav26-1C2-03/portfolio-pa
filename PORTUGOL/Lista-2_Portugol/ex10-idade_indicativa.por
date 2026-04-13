	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti
 Arquivo: vogal.por
 Data: 09/04/2026
 Autor: Guilherme Miguel Rodrigues Pereira Lakonski
 Descrição: 
 Ler a classificação indicativa de um filme e identificar sua categoria, de acordo com as seguintes faixas:
Até 10 anos → Infantil
De 11 a 14 anos → Infantojuvenil
De 15 a 17 anos → Juvenil
*/
programa {
  funcao inicio() {
    inteiro idade
    cadeia filme

    escreva("Qual o Filme?  ") 
    leia(filme)
    escreva("Qual a idade Recomendada?  ")
    leia(idade)

    escreva("\nFilme: ", filme, "\nCategoria: ")

    se (idade <= 10) 
    {
        escreva("Infantil")
    }
    senao se (idade >= 11 e idade <= 14) 
    {
        escreva("Infantojuvenil")
    }
    senao se (idade >= 15 e idade <= 17) 
    {
        escreva("Juvenil")
    }
    senao 
    {
        escreva("Adulto")
    }
  }
}
