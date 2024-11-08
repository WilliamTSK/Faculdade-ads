n1=float(input("qual o primeiro lado do triângulo: "))
n2=float(input("qual o segundo lado do triângulo: "))
n3=float(input("qual o terceiro lado do triângulo: "))

if n1==n2==n3:
    print("Equilátero")
elif n1==n2 or n2==n3 or n3==n1:
        print("Isósceles")
else:
    print("Escaleno")