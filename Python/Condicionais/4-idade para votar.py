idade = int(input("Digite sua idade: "))

if idade < 16:
    print("Não pode votar.")
elif idade >= 18 and idade <= 70:
    print("Voto é obrigatório.")
else:
    print("Voto é facultativo.")