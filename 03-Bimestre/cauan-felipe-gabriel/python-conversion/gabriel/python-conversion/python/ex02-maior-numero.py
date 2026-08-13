'''
    Autor: Gabriel Fernandes Barbarini
    Data: 10/08/2026
    Descrição: Lê dois números inteiros e informa qual é o maior ou se são iguais.
'''

numero1 = int (input("Escreva o primeiro numero: "))
numero2 = int (input("Escreva o segundo numero: "))

if numero1 > numero2:
    print ("O numero ", numero1 ,"é maior que o numero ", numero2)
elif numero1 < numero2:
    print ("O numero " , numero1 , "é menor que o numero " , numero2)
else:
    print("Os numeros tem o mesmo valor")
