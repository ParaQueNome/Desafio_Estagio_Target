import json
### Não utilizei funções para deixar o código organizado.
# Importando o arquivo json com os dados e passando para um dicionário:

with open("dados.json", encoding='utf-8') as dados_json:
    dados = json.load(dados_json)

# Declaração das variáveis:
menor = dados[0]['valor']
maior = dados[0]['valor']
soma = 0
dias = 0

# Percorrendo o vetor de dicionarios e realizando a verificação de dias úteis com faturamento e o menor e maior valores:

for item in dados:
    valor = item.get('valor')
    if menor > valor != 0:
        menor = valor

    if maior < valor != 0:
        maior = valor


    if valor != 0:
        dias += 1
    soma = soma + valor

media = soma/dias

print('O menor valor do faturamento em um dia é: R$', menor)
print('O maior valor do faturamento em um dia é: R$', maior)

# Percorrendo o vetor novamente para comparar os faturamentos com a media e utilizando a variavel 'dias' zerada:
dias = 0


for item in dados:
    valor = item.get('valor')
    if valor > media:
        dias +=1

print('A quantidade de dias os quais o faturamento foi maior que a media corresponde a: ', dias)



