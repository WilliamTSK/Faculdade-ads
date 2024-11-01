p=float(input("qual o valor do produto? "))
if p<= 100:
    porcentagem=5
elif p<=200:
    porcentagem=10
else:
    porcentagem=15

res=p-porcentagem*p/100
print(f"valor sem desconto {p}, valor com desconto {res}")