#Calcular média de idades entre 18 e 35

#Definir as variaveis necessarias

idade = 0
contador = 0
soma_idades = 0

#Pedir a idade a 10 pessoas


for i in range(10):
    idade = int(input("Digite a sua idade: "))

#for e usado para fazer com que o codigo repita
#i (item ou index) e uma variavel temporaria para contar repeticoes que o codigo da. nao precisa necessariamente de ser i. programadoes usam i por ser mais pratico (significa item)
#a funcao range cria uma sequencia de numeros. Aqui podemos definir o limite de numeros que o usuario pode inserir. Neste caso 10
#idade = int porque vai ser numero inteiro. seguido de input do utilizador com o texto Digite a sua idade". se fosse decimal, seria float

    if idade >= 18 and idade <=35:
    
        soma_idades = soma_idades + idade
        contador = contador + 1
        print("Idade aceite!")
    else:
        print("Idade fora dos 18-35. Idade nao contada")

#"if" = se idade for igual ou maior que 18 e idade igual ou menor que 35,
#soma_idades = soma+idades + idade. a soma_idades comeca a 0 e sempre que se mete uma idade, adiciona ao que ja la esta. por exemplo, a primeira idade inserida e 20, logo, soma_idades fica com valor 20. todas as idades seguintes adicionam a soma_idades
#contador comeca a 0 de acordo com o que meti nas variaveis. depois contador (0) +1. na proxima entrada o contador vai ter valor 1. logo contador (1) = contador(1)+1. De seguida o contador fica a 2.
#os : sao usados para finalizar o loop

if contador > 0:
    media = soma_idades / contador
    print(f"A media de idades e: {media}")
else:
    print("nenhuma idade valida foi inserida.")

#if contador > 0 - se o contador for maior que 0, a media vai ser soma_idades divididas por contador. digamos X idades dividido por 10 pessoas por exemplo
#o F quer dizer que podemos meter a variavel dentro do texto desde que esteja entre {}
#else, se nao houver idades validas, mostrar texto a dizer o mesmo