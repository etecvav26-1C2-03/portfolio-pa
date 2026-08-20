'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 20/08/2026
    Descrição: Verifica se um número inteiro positivo é primo.
'''
i = 1
divisor = 0
numero = int(input("Insira um número (INTEIRO E POSITIVO):"))
if numero >= 0:
    while i <= numero:
        if numero % i == 0:
            divisor += 1
        i += 1
    if divisor == 2:
        print("Esse número é primo")
    else:
        print("O número não é primo")

else:
    print("Tente novamente... Lembre-se (INTEIRO E POSITIVO).")
