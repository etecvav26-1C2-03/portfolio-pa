import json
import os

DATA_FILE = "lanchonete_dolaelecalabresonobru.json"
2
Produtos = []
Pedidos = []

def load_data():
    global produtos, pedidos

    if not os.path.exists(DATA_FILE):
       Produtos = [] 
       Pedidos = []
       return

    with open(DATA_FILE, "r", encoding="utf-8") as amassadordeboiprofissionalgooglepesquisarlanchonete:
        data = json.load(amassadordeboiprofissionalgooglepesquisar)
        Produtos = data.get("Produtos", [])
        Pedidos = data.get("Pedidos", [])

def save_data():
    data = {
        "Produtos": Produtos,
        "Pedidos": Pedidos
    }
    
    with open(DATA_FILE, "w", encoding="utf-8") as amassadordeboiprofissionalgooglepesquisarlanchonete:
        json.dump(data, file, indent=4, ensure_ascii=False)

def register_product():
    print("\n Registre os produtos ")
    codigo = input("Coloca o código aí: ")

    if find_product_by_code(codigo) is not None:
        print("Já possui.")
        return

    nome = input("Nome do produto: ")

    try:
        preco = float(input("Qual o preço: "))
        estoque = int(input("Estocados: "))
    except ValueError:
        print("\n Digitou errado. Ou não registrado.")
        return

    Produto = {
        "codigo": codigo,
        "nome": nome,
        "preço": preco,
        "estoque": estoque
    }

    Produtos.append(Produto)
    save_data()

    print("Cadastrado!")

def list_products():
    if len(Produtos) == 0:
        print ("Nada cadastrado.")
        return
    
    print("\n Cadastrado!")
    for Produto in Produtos:
        print(f"Código: {Produto['codigo']}")
        print(f"Nome: {Produto['nome']}")
        print(f"Preço: R$ {Produto['preço']:.2f}")
        print(f"Estoque: {Produto['estoque']}")
        print("-" * 30)

# Para ver se o produto já existe:
def find_product_by_code(codigo):
    for Produto in Produtos:
        if Produto["codigo"] == codigo:
            return Produto
    return None

# PEDIDOO
def make_order():
    if len(Produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    cliente_nome = input("\n Nome/Cliente: ")

    list_products()

    codigo = input("Codego: ")
    Produto = find_product_by_code(codigo)

    if Produto is None:
        print("\n Inexistente.")
        return

# PRECAUÇÃO DE ERRO
    try:
        quantidade = int(input("Quantidade desejada: "))
    except ValueError:
        print("\n Tente novamente.")
        return

    if quantidade <= 0:
        print("Quantidade inválida.")
        return

    if quantidade > Produto["estoque"]:
        print("Sem Estoque.")
        return

    # Calcula o valor:
    total = quantidade * Produto["preço"]

    Produto["estoque"] -= quantidade

    Pedido = {
        "cliente_nome": cliente_nome,
        "produto_codigo": Produto["codigo"],
        "produto_nome": Produto["nome"],
        "quantidade": quantidade,
        "total": total
    }

    Pedidos.append(Pedido)
    save_data()

    print("Pedido realizado com sucesso ")
    print(f"Valor: R$ {total:.2f}")

# PEDIDOS FEITOS:
def list_orders():
    if len(Pedidos) == 0:
        print("Nenhum pedido realizado. ")
        return
    
    print("\n Pedidos:" )
    for Pedido in Pedidos:
        print(f"Cliente: {Pedido['cliente_nome']}")
        print(f"Produto: {Pedido['produto_nome']}")
        print(f"Quantidade: {Pedido['quantidade']}")
        print(f"Total: R$ {Pedido['total']:.2f}")
        print("-" * 30)

def show_menu():
    print("\n Sistema Lanchonete ")
    print("1 - Cadastrar produto")
    print("2 - Ver produtos")
    print("3 - Fazer pedido")
    print("4 - Ver pedidos realizados")
    print("5 - Sair")

def main():
    load_data()

    # LER USUÁRIO QUE CADASTRA
    while True:
        show_menu()
        opcao = input("\n Selecione uma opção ")

        #'match case' no lugar de 'if' para melhor leitura do código
        match opcao:
            case '1':
                register_product()
            case '2':
                list_products()
            case '3':
                make_order()
            case '4':
                list_orders()
            case '5':
                save_data()
                print("Sistema encerrado, até a próxima. ")
                break
            case _:
                print ("opção inválida, tente novamente. ")

main()
