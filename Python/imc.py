p=float(input("Digite seu peso: "))
a=float(input("Digite sua altura: "))
imc=p/(a**2)
if imc<18.5:
    print("abaixo do peso")
elif imc<=24.9:
    print("Peso normal")
elif imc <=29:
    print("sobrepeso")
else:
    print("obeso")