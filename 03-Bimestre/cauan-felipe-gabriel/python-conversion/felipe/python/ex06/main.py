note = float(input("Digite uma nota entre 0 e 10: "))
sum = 0
amount = 0

while (note >= 0 and note <= 10):
    sum = sum + note
    amount = amount + 1

    note = float(input("Digite outra nota entre 0 e 10: "))

if (amount > 0):
    print(f"Media das notas: {sum / amount}")

else:
    print("Nenhuma nota valida foi digitada.")
