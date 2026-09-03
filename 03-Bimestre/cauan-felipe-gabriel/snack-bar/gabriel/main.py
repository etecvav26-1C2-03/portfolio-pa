import json
import os

DATA_FILE = "lanterna_lanchote.json"

produto = []
pedido = []

def load_data():
    global produto, pedido

    if not os.path.exists(DATA_FILE):
       produto = [] 
       pedido = []
       return

    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        produto = data.get("produtos", [])
        pedido = data.get("pedidos", [])


def save_data(data):
    data = {
        "produtos": produto,
        "pedidos": pedido
    }
    
    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)

def register_product():
    print("\n Registre um produto ")
    codigo = input("Insira o código do produto: ")

    if find_product_by_code(codigo) is not None:
        print("Um produto com esse código ja existe. ")
        return

    nome = input("Nome do produto: ")
    preco = float(input("Preço do produto: "))
    estoque = int(input("Quantidade em estoque: "))

    produto = {
        "codigo": codigo,
        "nome": nome,
        "preço": preco,
        "estoque": estoque
    }

    produto.append(produto)
    save_data()

    print("Produto cadastrado com sucesso!")

def list_products():
    if len(produtos) == 0:
        print ("Nenhum produto cadastrado. ")
        return
    
    print("\n Produtos cadastrados ")
    for produto in produtos:
        print(f"Código: {produto['codigo']}")
        print(f"Nome: {produto['nome']}")
        print(f"Preço: R$ {produto['preco']:.2f}")
        print(f"Estoque: {produto['estoque']}")
        print("-" * 30)

def find_product_by_code(codigo):
    for produto in produtos:
        if produto["codigo"] == codigo:
            return produto
    return None

def make_order():
    if len(produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    cliente_nome = input("Nome do cliente: ")

    list_products()

    codigo = input("Digite o código do produto: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("Produto não existe.")
        return

    quantidade = int(input("Quantidade desejada: "))

    if quantidade <= 0:
        print("Quantidade inválida.")
        return

    if quantidade > produto["estoque"]:
        print("Estoque insuficiente.")
        return
    
    total = quantidade * produto["preco"]
    produto["estoque"] -= quantidade

    pedido = {
        "cliente_nome": cliente_nome,
        "produto_codigo": produto["codigo"],
        "produto_nome": produto["nome"],
        "quantidade": quantidade,
        "total": total
    }

    pedidos.append(pedido)
    save_data()

    print("Pedido realizado com sucesso ")
    print(f"Total: R$ {total:.2f}")

