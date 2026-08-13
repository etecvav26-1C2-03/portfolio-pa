'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 13/08/2026
    Descrição: Calcula a média de notas válidas entre 0 e 10 usando while.
'''

soma = 0
valor = 0

nota = int(input("Digite sua nota (0/10):\n>>> "))

while nota >= 0 and nota <= 10:
    soma += nota
    nota = int(input("Digite sua nota:\n>>> "))
    valor += 1
if valor > 1:
    media = soma / valor
    print("Média calculada:\n>>>", media)
else: 
    print("Nenhuma nota válida foi digitada...")

