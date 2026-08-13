n = int(input())
div = 1
q_divs = 0

if (n > 0):

    while (div <= n):
        if (n % div == 0):
            q_div = q_div + 1

        div = div + 1

    if (q_div == 2):
        print("O numero e primo.")

    else:
        print("O numero nao e primo.")

else:
    print("Numero invalido.")
