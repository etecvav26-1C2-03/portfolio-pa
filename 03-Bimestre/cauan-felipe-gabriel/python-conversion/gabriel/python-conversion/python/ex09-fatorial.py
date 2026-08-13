'''
    Autor: Gabriel Fernandes Barbarini
    Data: 10/08/2026
    Descrição: Lê um numero e calcula seu fatorial.
'''

numero = int(input("Digite um numero: "))
contagem = 1
fatorial = 1

if (numero >= 0):
    while (contagem <= numero):
        fatorial = fatorial * contagem
        contagem = contagem + 1

    print(f"Fatorial: {fatorial}")

else:
    print("Digite outro numero.")
