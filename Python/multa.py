v = float(input("Digite a velocidade do seu carro: "))
if v<=80:
    print("Dentro do limite")
else:
    m=v-80
    m=m*15
    print(f"ultrapassou o limte {80}, sua multa é de {m}")