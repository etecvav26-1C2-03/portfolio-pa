	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti
 Arquivo: numero-maior.por
 Data: 08/04/2026
 Autor:  Guilherme Miguel Rodrigues Pereira Lakonski
 Descrição: 
 Ler três números inteiros e exibir o maior entre eles.
*/
programa
{
	funcao inicio ()
	{
    real n1, n2, n3
    escreva("Qual Seu Primeiro Número?   ")
    leia(n1)
    escreva("Qual Seu Segundo Número?    ")
    leia(n2)
    escreva("Qual Seu Terceiro Número?   ")
    leia(n3)
    se(n1 > n2 e n1 > n3)
    escreva("O Maior é: ", n1)
    senao se(n2 >n1 e n2 > n3)
    escreva("O Maior é: ", n2)
    senao(n3 >n2 e n3 > n2)
    escreva("O Maior é: ", n3)
	}
} 