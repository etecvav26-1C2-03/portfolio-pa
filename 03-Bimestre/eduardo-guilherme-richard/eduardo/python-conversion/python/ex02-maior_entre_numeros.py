'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 10/08/2026
    Descrição: Lê dois números inteiros e informa qual é o maior ou se são iguais.
'''

numero1 = int (input("escreva o primeiro numero: "))
numero2 = int (input("escreva o segundo numero: "))
if numero1 > numero2:
    print ("o numero ", numero1 ,"e maior que o numero ", numero2)
elif numero1 < numero2:
    print ("o numero " , numero1 , "e menor que o numero " , numero2)
else:
    print("os numeros tem o mesmo valor")
