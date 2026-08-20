'''
    Autor: Eduardo Antônio de Oliveira Bargueiras
    Data: 20/08/2026
    Descrição: Simula um sistema simples de senha com até 3 tentativas.
'''
senha_correta = 1234
contador_senha = 1

senha = int(input("Olá! Para fazer login no sistema insira a sua senha:\nSENHA >>> "))

while contador_senha <= 3:
    if senha == senha_correta:
        print("\nSucesso!! O login foi concluido...")
        break
    else:
        contador_senha += 1
        if contador_senha > 3:
            print("\n\nO acesso foi bloqueado devido a um grande número de tentativas... Por favor tente novamente mais tarde.")
            break
        
        senha = int(input("\nSenha incorreta... Porfavor insira novamente:\nSENHA >>> "))
