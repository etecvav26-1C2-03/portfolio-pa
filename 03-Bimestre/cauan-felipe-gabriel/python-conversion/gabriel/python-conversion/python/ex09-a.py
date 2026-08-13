n = int(input())
count = 1
factorial = 1

if (n >= 0):

    while (count <= n):
        factorial = factorial * count
        count = count + 1

    print(f"Fatorial: {factorial}")

else:
    print("Numero invalido.")
