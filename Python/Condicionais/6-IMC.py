peso=int(input("Digite seu peso em Kg: "))
altura=float(input("Digite sua altura em Metros: "))
imc=peso/(altura*altura)
a=round(imc,1)

if imc < 18.5:
    print("Seu IMC é de",a,", Abaixo do peso.")
elif imc >= 18.5 and imc <= 24.9:
    print("Seu IMC é de",a,", Peso Ideal.")
elif imc >= 25.0 and imc <= 29.9:
    print("Seu IMC é de",a,", Sobrepeso.")
elif imc >= 30.0 and imc <= 39.9:
    print("Seu IMC é de",a,", Obesidade.")
else:
    print("Seu IMC é de",a,", Obesidade Grave.")