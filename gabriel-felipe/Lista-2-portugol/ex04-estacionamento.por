/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: estacionamento.por
* Data: 07/04/2026
* Autor: gabriel fernandes barbarini 
* Descrição: 
*Ler o tempo de permanência de um veículo em um estacionamento e calcular o valor a pagar, considerando:

Até 2 horas → R$ 2,00 por hora

Após 2 horas →

As 2 primeiras continuam custando R$ 2,00 cada
As horas adicionais custam R$ 1,00 por hora
*/

programa
{
	funcao inicio ()
	{
      inteiro horas
      escreva ("Por quantas horas você estacionou? ")
      leia (horas)

      se (horas <= 2)
      escreva ("O valor é: ", horas * 2)

      senao {
      	escreva (2 + horas)
      }
	}
}
