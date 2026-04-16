	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: vogal.por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler um caractere e verificar se ele é uma vogal. Exibir o caractere informado e indicar se é ou não uma vogal.

*/
programa
{
	funcao inicio ()
	{
    caracter digito
    leia(digito)
    se (digito == 'a' ou digito == 'A' ou digito == 'e' ou digito == 'E' ou digito == 'i' ou digito == 'I' ou digito == 'o' ou digito == 'O'ou digito == 'u' ou digito == 'U') {
      escreva(digito, " É uma vogal")
    }
    senao { 
      escreva(digito, " Não é uma vogal")
    }
	}
} 