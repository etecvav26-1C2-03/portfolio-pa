	/*
*Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: triângulo.por
* Data: 07/03/2026
* Autor: gabriel fernandes barbarini 
* Descrição:  Ler a base e altura de um triângulo.
* Caucular e exibir a área do triângulo sabendo que área = base * altura / 2
    */
programa
{
	funcao inicio()
	{
		real t_base, t_altura
		escreva ("qual a base do triângulo? ")
		leia (t_base)
		escreva ("\nqual a altura do triângulo? ")
		leia (t_altura)
		escreva ("a área do trângulo é ", t_base * t_altura /2)
	}

}
