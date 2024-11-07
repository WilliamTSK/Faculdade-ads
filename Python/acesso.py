u=input("Digite o usuario: ")
s=int(input("Digite a sua senha: "))

if u == "admin" and s == 123456:
    print("login bem-sucedido")
    Acesso_Nivel=input("seu nivel de acesso: ")
    if Acesso_Nivel == "admin":
        print("acesso total")
    else:
        print("Acesso Limitado")

else:
    print("Usuario ou senha incorretos")