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
