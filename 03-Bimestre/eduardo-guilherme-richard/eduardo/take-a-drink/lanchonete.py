import json
import os

DATA-FILE = "lanchonete.json"

produtos = []
pedidos = []

def load_data():
    global produtos, pedidos

    if not os.path.exists(DATA-FILE):
        produtos = []
        pedidos = []
        return
    
    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        produtos = data.get("produtos", [])
        pedidos = data.get("pedidos", [])


def save_data():
    data = {
        "produtos": produtos,
        "pedidos": pedidos
    }

    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)

def registrar_produto():
    codigo = input("Código do produto:\n>>> ")

    if procurar_produto_codigo(codigo) is not None:
        print("Já existe um produto com este código.")
        return

    nome = input("Nome do produto:\n>>> ")
    valor = float(input("Valor do produto:\n>>> "))
    estoque = int(input("Quantidade em estoque:\n>>> "))

    produto = {
        "codigo": codigo,
        "nome": nome,
        "valor": preco,
        "estoque": estoque
    }

    produtos.append(produto)
    save_data()

    print("Produto cadastrado com sucesso!")

