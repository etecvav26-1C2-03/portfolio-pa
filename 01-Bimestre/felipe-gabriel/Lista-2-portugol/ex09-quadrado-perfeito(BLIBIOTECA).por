	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: quadrado_perfeito(BLIBIOTECA).por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler um número e verificar se ele é um quadrado perfeito.

*/
programa
{
  inclua biblioteca Matematica
	funcao inicio ()
	{
    real num, raiz
    inteiro int
    leia(num)

    raiz = Matematica.raiz(num, 2)
    int = raiz
    se (num == int * int) {
      escreva(num, " é quadrado perfeito")
    }
    senao {
      escreva(num, " não é quadrado perfeito")
    }  

	}
}
/* comando inteiro(raiz) nao fucionou, nao sei se porcausa de atualização ou algo assim mas di meu jeito kkkk*/