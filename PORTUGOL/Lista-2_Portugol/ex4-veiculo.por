/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: veiculo.por
* Data: 02/04/2026
* Autores Eduardo Antonio de Oliveira Bargueiras e Guilherme Miguel Rodrigues Pereira Lakonski(Fez na minha conta porque estava sem a dele)
* Descrição:
* Ler o tempo de permanência de um veículo em um estacionamento e calcular o valor a pagar, considerando:
* Até 2 horas → R$ 2,00 por hora
* Após 2 horas →
* As 2 primeiras continuam custando R$ 2,00 cada
* As horas adicionais custam R$ 1,00 por hora
*/

programa
{
	
	funcao inicio()
	{
	real tempo, valor
	
	escreva("Iremos calcular o valor do estacionamento.")
	escreva("\n\n- Para começarmos digite quanto tempo você deixou o seu veículo estacionado.\n\nOBS: Coloque o tempo como: 1 se for uma hora ou 2 se for duas horas. Caso seja menos coloque 0.5 ou 0.50 para 30 minutos.\n>>>")
	
	leia(tempo)
	
	se(tempo <= 2){
		valor = tempo * 2
		escreva("Quantia que deve ser paga:", "R$:",valor)
	}
	se(tempo > 2){ 
		valor = (2 * 2) + ((tempo - 2) * 1)
		escreva("Quantia que deve ser paga:", "R$:",valor)
	}
	}
}
