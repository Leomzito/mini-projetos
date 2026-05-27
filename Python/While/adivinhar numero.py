while True: #enquanto essa parte for falsa (diferente de 7) o laco sera repetido ate ser falso (7)
    adivinhe = int(input("Digite a senha: "))
    if adivinhe!=7:
        print("Senha incorreta.")
        continue
    else:
        print("Senha correta.")
        break