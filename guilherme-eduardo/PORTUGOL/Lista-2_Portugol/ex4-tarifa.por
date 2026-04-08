 Instituição: EtecVAV - Vasco Antonio Vechiarutti
 Arquivo: tarifa.por
 Data: 07/04/2026
 Autor: Guilherme Miguel Rodrigues Pereira Lakonski
 Descrição: 
 Ler a idade do passageiro e determinar o tipo de tarifa:
  Até 2 anos → Gratuita
  De 3 a 12 anos → Meia tarifa
  Acima de 12 anos → Tarifa completa
  O programa deve exibir o tipo de tarifa correspondente.
*/
programa
{
	funcao inicio (){
    inteiro idade
    cadeia tarifa
    escreva("qual a sua idade?  ")
    leia(idade)
    se (idade <= 2)
    escreva("a tarifa é Gratuita")
    senao se(idade <= 12)
    escreva("é meia tarifa")
    senao
    escreva("a tarifa é completa")

  }
	

} 
