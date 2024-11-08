sa = float(input("Digite o salário anual: "))

if sa <= 20000:
    print("Isento de imposto")
    novo_sal = sa
elif sa <= 50000:
    imposto = (sa - 20000) * 0.10
    novo_sal = sa - imposto
    print(f"Imposto de Renda: R$ {imposto:.2f}")
    print(f"Salário Atual: R$ {novo_sal:.2f}")
else:
    imposto = (50000 - 20000) * 0.10 + (sa - 50000) * 0.20
    novo_sal = sa - imposto
    print(f"Imposto de Renda: R$ {imposto:.2f}")
    print(f"Salário Atual: R$ {novo_sal:.2f}")
