'''
    Autor: Gabriel Fernandes Barbarini
    Data: 13/08/2026
    Descrição: lê um numero e calcula se é primo.
'''

numero = int(input("Digite um número: "))
divisao = 1
num_div = 0

if (numero > 0):

    while (divisao <= numero):
        if (numero % divisao == 0):
            num_div = num_div + 1

        divisao = divisao + 1


    if (num_div == 2):
        print("O numero é primo.")

    else:
        print("O numero não é primo.")

else:
    print("Digite outro numero.")
