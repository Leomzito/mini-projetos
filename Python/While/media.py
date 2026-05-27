i=1
soma=0
while i<=5:
    nota = float(input(f"digite a nota do aluno {i}: "))
    soma+=nota
    i=i+1
print("a soma das notas e: ",soma)
print("a media das notas e: ",soma/5)