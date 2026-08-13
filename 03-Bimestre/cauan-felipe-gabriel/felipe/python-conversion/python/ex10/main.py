

senha = int(input("Digite a senha: "))
senha_correta = 1234
tentativas = 1
limite_tentativas = 3

while (senha != senha_correta and tentativas < limite_tentativas):
    print("Senha incorreta. Tente novamente: ")
    senha = int(input("Digite a senha: "))

    tentativas = tentativas + 1

if (senha == senha_correta):
    print("Acesso liberado.")

else:
    print("Acesso bloqueado.")
