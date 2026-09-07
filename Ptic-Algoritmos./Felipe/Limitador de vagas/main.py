# Limitador de vagas para cada oficina
offices = {
    "Robótica": 40,
    "Programação": 50,
    "Design de Games": 30,
    "Impressão 3D": 20,
    "Cibersegurança": 25,
    "Inteligência Artificial": 35,
    "Edição de Vídeo": 20,
    "Redes de Computadores": 20,
}

# dict aonde vai guardar os dados
result = {}


def mostrar_oficinas_disponiveis():
    print("\n- Oficinas disponíveis -")
    for nome_oficina, vagas in offices.items():
        status = f"{vagas} vaga(s)" if vagas > 0 else "ESGOTADA"
        print(f"  - {nome_oficina}: {status}")
    print()


# quantidade de cadastrar normalmente vai por ja os 240 mas se for menos eu usei
qtd_alunos = int(input("Quantos alunos deseja cadastrar? "))

alunos = []

for i in range(1, qtd_alunos + 1):
    print(f"\n--- Aluno {i} ---")
    mostrar_oficinas_disponiveis()  # <- principamente para mostrar o nome de cada uma, e tbm no final mostra a quantidade

    nome = input("Nome do aluno: ")
    pref1 = input("1ª preferência de oficina: ")
    pref2 = input("2ª preferência de oficina: ")

    alunos.append({
        "ordem": i,
        "nome": nome,
        "preferencias": [pref1, pref2]
    })

# Algoritmo de alocação
for aluno in sorted(alunos, key=lambda a: a["ordem"]):  # ordena pela ordem de chegada, nvd nem precisava ja que ja ta na ordem porcausa do indice mas e util caso for usar csv algo assm
    alocado = False

    # tenta pelas preferencias do aluno
    for pref in aluno["preferencias"]:
        if offices.get(pref, 0) > 0:
            offices[pref] -= 1
            result[aluno["nome"]] = pref
            alocado = True
            break

    # bota numa aleatoria se n tiver nenhuma preferencia certa escolhida seja por vaga ou erro da sintaxe
    if not alocado:
        for nome_oficina in offices:
            if offices[nome_oficina] > 0:
                offices[nome_oficina] -= 1
                result[aluno["nome"]] = nome_oficina
                break

# resultado 
print("\n--- Resultado da Alocação ---")
for nome, oficina in result.items():
    print(f"{nome} -> {oficina}")

print("\n--- Vagas restantes ao final ---")
mostrar_oficinas_disponiveis()