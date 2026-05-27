# Lendo o preço do produto
preco = float(input("Digite o preço do produto: R$ "))

# Lendo o percentual de desconto
desconto_percentual = float(input("Digite o percentual de desconto (%): "))

# Calculando o valor do desconto
valor_desconto = preco * (desconto_percentual / 100)

# Calculando o novo preço do produto
novo_preco = preco - valor_desconto

# Exibindo os resultados
print(f"Valor do desconto: R$ {valor_desconto:.2f}")
print(f"Novo preço do produto: R$ {novo_preco:.2f}")
