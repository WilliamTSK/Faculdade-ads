investimento = float(input("Digite o valor do investimento inicial: "))
taxa = float(input("Digite a taxa de juros (em decimal, por exemplo, 0.05 para 5%): "))
tipo_juros = input("Digite o tipo de juros (Simples ou Composto): ")

if tipo_juros == "simples":
    valor_final = investimento * (1 + taxa)
elif tipo_juros == "composto":
    valor_final = investimento * (1 + taxa) ** 1
