'''
    Autor: Gabriel Fernandes Barbarini
    Data: 10/08/2026
    Descrição: Lê um número inteiro e informa se ele é positivo, negativo ou zero.
'''

numero = int(input("Escreva um número: "))
if numero > 0:
    print("seu número é positivo")
elif numero == 0:
    print ("seu número é 0")
else:
    print("seu número é negativo")
