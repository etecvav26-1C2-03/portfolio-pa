

contador = 1
positivos = 0
negativos = 0
zeros = 0

while (contador <= 10):
    numero = int(input(f"Digite o {contador}o numero: "))

    if (numero > 0):
        positivos = positivos + 1

    elif (numero < 0):
        negativos = negativos + 1

    else:
        zeros = zeros + 1

    contador = contador + 1

print(f"Positivos: {positivos}")
print(f"Negativos: {negativos}")
print(f"Zeros: {zeros}")
