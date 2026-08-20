'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 20/08/2026
    Descrição: Calcula o fatorial de um número inteiro positivo.
'''
numero = int(input("Insira um número (INTEIRO E POSITIVO):"))
res_fatorial = 1
contador = 1
if numero >= 0:
    while contador <= numero:
        res_fatorial = res_fatorial * contador
        contador += 1
    print("O fatorial do número é:", res_fatorial)
else:
    print("Tente novamente... Lembre-se (INTEIRO E POSITIVO).")
