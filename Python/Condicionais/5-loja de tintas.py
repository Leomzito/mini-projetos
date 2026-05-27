import math

metros = int(input("Qual o tamanho da área em metros quadrados que deseja pintar?: \n"))
latas=metros/54
latasArre=math.ceil(latas)

print("\nVocê precisará de",latasArre,"latas de tinta, o valor ficará de R$",latasArre*80)
