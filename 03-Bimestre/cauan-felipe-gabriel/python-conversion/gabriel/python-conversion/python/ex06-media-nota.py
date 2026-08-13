
soma = 0
quantidade = 0
nota = float(input("Digite uma nota entre 0 e 10: "))

while (nota >= 0 and nota <= 10):
    soma = soma + nota
    quantidade = quantidade + 1

    nota = float(input("Digite uma nota entre 0 e 10: "))

if (quantidade > 0):
    print(f"Média das notas: {soma / quantidade}")

else:
    print("Nenhuma nota valida foi digitada.")
