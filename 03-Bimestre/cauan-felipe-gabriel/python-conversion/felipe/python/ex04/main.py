n = int(input())
count = 1
sum = 0

if(n > 0):

    while (count <= n):
        if(count % 2 == 0 ):
            sum = sum + count

        count+=1

    print(f"Soma dos pares: {sum} ")

else:
    print("Numero invalido")







