	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti
 Arquivo: vogal.por
 Data: 09/04/2026
 Autor: Guilherme Miguel Rodrigues Pereira Lakonski
 Descrição: 
 Ler um caractere e verificar se ele é uma vogal. Exibir o caractere informado e indicar se é ou não uma vogal.

*/
programa
{
	funcao inicio ()
	{
    caracter letra
    escreva("Qual Letra Deseja Saber Se é Uma Vogal? ")
    leia(letra)
    se (letra =="a" ou letra == "A" ou letra == "e" ou letra == "E" ou letra == "i" ou letra == "I" ou letra == "o" ou letra == "O" ou letra == "u" ou letra == "U")
    escreva("É Uma Vogal")
    senao se(letra == "b" ou letra == "B" ou letra == "c" ou letra == "C" ou letra == "d" ou letra == "D" ou letra == "f" ou letra == "F" ou letra == "g" ou letra == "G" ou letra == "h" ou letra == "H" ou letra == "j" ou letra == "J" ou letra == "k" ou letra == "K" ou letra == "l" ou letra == "L" ou letra == "m" ou letra == "M" ou letra == "n" ou letra == "N" ou letra == "p" ou letra == "P" ou letra == "q" ou letra == "Q" ou letra == "r" ou letra == "R" ou letra == "s" ou letra == "S" ou letra == "t" ou letra == "T" ou letra == "v" ou letra == "V" ou letra == "w" ou letra == "W" ou letra == "x" ou letra == "X" ou letra == "z" ou letra == "Z")
    escreva("É Uma Consoante")    
    senao se(letra == "y" ou letra == "Y")
    escreva("É Uma Semivogal")
    senao
    escreva("Não é Uma Letra")
  }
}
