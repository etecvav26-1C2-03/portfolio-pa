'''
    Autor: Gabriel Fernandes Barbarini
    Data: 13/08/2026
    Descrição: Lê várias notas e calcula e média entre elas.
'''

numero = int(input("Digite um número: "))
divisao = 1
num_div = 0

if (numero > 0):

    while (divisao <= numero):
        if (numero % divisao == 0):
            num_div = num_div + 1

        divisao = divisao + 1
