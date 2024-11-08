s = float(input("Digite o seu salário atual: "))
a = int(input("Digite os anos trabalhados na empresa: "))

if a > 20:
    novo_sal = s * 1.20
    print(f"Seu Bônus é de 20%, seu novo salário é: R$ {novo_sal:.2f}")
elif 10 <= a <= 20:
    novo_sal = s * 1.15
    print(f"Seu Bônus é de 15%, seu novo salário é: R$ {novo_sal:.2f}")
elif 5 <= a <= 10:
    novo_sal = s * 1.10
    print(f"Seu Bônus é de 10%, seu novo salário é: R$ {novo_sal:.2f}")
else:
    novo_sal = s * 1.05
    print(f"Seu Bônus é de 5%, seu novo salário é: R$ {novo_sal:.2f}")
