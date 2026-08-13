'''
    Autor: Gabriel Fernandes Barbarini
    Data: 10/08/2026
    Descrição: Lê um número de 1 a 10 e exibe a tabuada.
'''
i = 1
numero = int(input("Insira um número de 1 a 10:\n "))
if numero > 0 and numero <= 10:
    while i <= 10:
        resultado = numero * i
        print(numero, " x ", i, " = ", resultado)
        i += 1
