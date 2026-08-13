
numero = int(input("Digite um numero de 1 a 10: "))
contador = 1

while numero < 1 or numero > 10:
    print("Valor invalido. Digite novamente: ")
    numero = int(input("Digite um numero de 1 a 10: "))

while contador <= 10:
    print(f"{numero} x {contador} = {numero * contador}")
    contador += 1
