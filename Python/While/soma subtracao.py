
while True:
    print("selecione uma opcao 0 - 1 - 2:\n")
    print("1 - somar\n")
    print("2 - subtrair\n")
    print("0 - sair\n")
    op= int(input("selecione a opcao: "))
    if op==1:
        print("soma\n")
        num1=float(input("digite o valor 1: "))
        num2=float(input("digite o valor 2: "))
        print("o resultado e: ",num1+num2,"\n")
        continue
    if op==2:
        print("subtracao\n")
        num1=float(input("digite o valor 1: "))
        num2=float(input("digite o valor 2: "))
        print("o resultado  e: ",num1-num2,"\n")
        continue
    if op==0:
        print("operacao encerrada")
        break
    else:
        print("opcao invalida")
        continue