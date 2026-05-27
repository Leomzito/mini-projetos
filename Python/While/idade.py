mulheres=0
homens=0
mais18=0
menos20=0
while True:
    print("Digite seu sexo ('h' para homem ou 'm' para mulher) ou aperte 0 para encerrar: ")
    print("h - homem\n")
    print("m - mulher\n")
    print("0 - sair\n")
    op = input("selecione a opcao: ")
    if op=='h':
        homens=homens+1
        print("homem\n")
        idade=float(input("digite sua idade: "))
        if idade>18:
            mais18=mais18+1
        continue
    if op=='m':
        print("mulher\n")
        num1=float(input("digite sua idade: "))
        if idade>18:
            mais18=mais18+1
        if idade<20:
            menos20=menos20+1
        continue
    if op=='0':
        print("operacao encerrada")
        break
    else:
        print("opcao invalida")
        continue
print("pessoas com mais de 18: ",mais18)
print("homens cadastrados: ",homens)
print("mulheres com menos de 20: ",menos20)
    
    