count = 1
p = 0
n = 0
zeros = 0

while (count <= 10):
    numero = int(input(f"Digite o {count}o numero: "))

    if (numero > 0):
        p = p + 1

    elif (numero < 0):
        n = n + 1

    else:
        zeros = zeros + 1

    count = count + 1

print(f"Positivos: {p}")
print(f"Negativos: {n}")
print(f"Zeros: {zeros}")
