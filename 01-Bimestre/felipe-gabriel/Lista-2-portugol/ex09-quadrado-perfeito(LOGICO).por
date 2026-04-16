	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: quadrado_perfeito(LOGICO).por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler um número e verificar se ele é um quadrado perfeito.

*/
programa
{
	funcao inicio ()
	{
    inteiro num, i = 1
    leia(num)
    enquanto (i * i < num) {
      i = i + 1
      }
    se (i * i == num)
      escreva(num, " É um quadrado perfeito")
    senao {
      escreva(num, " Não e um quadrado perfeito")
    }
  }
} 