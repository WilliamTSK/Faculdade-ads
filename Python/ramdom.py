import random
numero = random.randint (1,100)

palpite = int(input("digite um número: "))

while palpite != numero:
    if palpite > numero:
        print("O número é menor")
        palpite = int(input("digite um número: "))
    elif palpite < numero:
        print("O número é maior")
        palpite = int(input("digite um número: "))
else:
    print("Acertou")