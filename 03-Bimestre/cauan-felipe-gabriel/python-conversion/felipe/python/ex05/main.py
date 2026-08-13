n = int(input())
count = 1

while n < 1 or n > 10:
    print("Valor invalido. Digite novamente: ")
    n = int(input("Digite um numero de 1 a 10: "))

while count <= 10:
    print(f"{n} x {count} = {n * count}")
    count += 1
