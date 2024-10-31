n1 = float(input("digite sua primeira nota: "))
n2 = float(input("digite sua segunda nota: "))
n3 = float(input("digite sua terceira nota: "))

m=(n1+n2+n3)/3

if m>=7:
    print(f"aprovado {m:.2f}")
elif m >= 5:
    print(f"em recuperação {m:.2f}")
else:
    print(f"reprovado {m:.2f}")