'''
    Autor: Gabriel Fernandes Barbarini
    Data: 13/08/2026
    Descrição: Lê várias notas e calcula e média entre elas.
'''

contagem = 1
positivo = 0
negativo = 0
zero = 0

while (contagem <= 10):
    numero = int(input("Digite um numero: "))

    if (numero > 0):
        positivo = positivo + 1

    elif (numero < 0):
        negativo = negativo + 1

    else:
        zero = zero + 1

    contagem = contagem + 1


print(f"Números positivos: {positivo}")
print(f"Números negativos: {negativo}")
print(f"Zeros: {zero}")
