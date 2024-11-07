idade = int(input("escreva a usa idade: "))

if idade >= 16:
    print("você pode votar")
    if idade >=18 and idade<=70:
        print("você é obrigado a votar")
    else:
        print("você tem o voto facultativo")
else:
    print("você não pode votar")