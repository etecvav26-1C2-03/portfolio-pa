'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 13/08/2026
    Descrição: Lê 10 números e conta quantos são positivos, negativos e zeros.
'''

i = 1
positivo = 0
negativo = 0
zero = 0
while i <= 10:
    numero = int(input("Insira um numero:"))
    i += 1
    if numero > 0:
        positivo += 1
    elif numero < 0:
        negativo += 1
    else:
        zero += 1
print("\n\n============== RESULTADOS ==============\n\nNumeros positivos: ", positivo, "\nNumeros negativos: ", negativo, "\nNumeros iguais a 0: ", zero)
