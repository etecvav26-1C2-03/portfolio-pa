'''
    Autor: Gabriel Fernandes Barbarini
    Data: 10/08/2026
    Descrição: Lê uma senha e verifica se está correta.
'''

senhac = 1234
tentativas = 1
tenativaslim = 3

senha = int(input("Digite a senha: "))

while senha != senhac and tentativas < tenativaslim:
    print("Senha incorreta")
    tentativas += 1
    senha = int(input("Digite a senha: "))
    
if senha == senhac:
    print("Acesso liberado")
else:
    print("Senha incorreta")
