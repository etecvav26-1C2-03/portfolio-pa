	/*
 Instituição: EtecVAV - Vasco Antonio Vechiarutti

 Arquivo: tarifa.por
 Data: 03/04/2026
 Autor: felipe barbosa santos
 Descrição: 
 Ler a idade do passageiro e determinar o tipo de tarifa:

  Até 2 anos → Gratuita
  De 3 a 12 anos → Meia tarifa
  Acima de 12 anos → Tarifa completa
  O programa deve exibir o tipo de tarifa correspondente.

*/
programa
{
	funcao inicio ()
	{
  inteiro idade
  cadeia tarifa
  leia(idade)
  se (idade <= 2) {
    tarifa = "gratuita"
  }
  senao se (idade <= 12) {
    tarifa = "meia tarifa"
  }
  senao {
    tarifa = "tarifa completa"
  }
  escreva(tarifa)
	}
} 