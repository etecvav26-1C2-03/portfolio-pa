	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: maior_numero.por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler três números inteiros e exibir o maior entre eles.

*/
programa
{
	funcao inicio ()
	{
    inteiro n[3], maior
    leia(n[0])
    leia(n[1])
    leia(n[2])

    maior = n[0]
    se (n[1] > maior) {
      maior = n[1]
    }
    se (n[2] > maior) {
      maior = n[2]
    }
    escreva("maior valor: ", maior)

	}
} 