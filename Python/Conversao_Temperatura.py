t=float(input("Digite a temperatura: "))
e=input("escolha entre Celsius(c) e Fahrenheit(f): ")

if e =="c":
    F = t * 9/5 + 32
    print(F)
else:
    C = ( t - 32 ) * 5/9
    print(C)