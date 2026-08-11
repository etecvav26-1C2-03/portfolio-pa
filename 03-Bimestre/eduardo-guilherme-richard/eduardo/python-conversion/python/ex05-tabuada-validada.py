'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 11/08/2026
    Descrição: Lê um número de 1 a 10 e exibe sua tabuada, validando a entrada.
'''
i = 1
numero = int(input("Insira um número de 1 a 10:\n>>> "))
if numero > 0 and numero <= 10:
    while i <= 10:
        resultado = numero * i
        print(numero, " x ", i, " = ", resultado)
        i += 1
else: 
    print("Erro...  INSIRA O NÚMERO DE 1 A 10")
