'''
    Autor: Gabriel Fernandes Barbarini
    Data: 11/08/2026
    Descrição: Calcula a soma dos números pares de 1 até um número informado.
'''

numero = int(input("Insira um número positivo: "))
i = 1
soma = 0
if numero >= 0:
    while i < numero:
        i += 1
        if i % 2 == 0:
            soma += i   
    print("A soma dos números pares é: ", soma) 
else:
    print("Erro... Insira um número positivo e tente novamente.")
