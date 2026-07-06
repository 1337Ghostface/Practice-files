#include <stdio.h>

/*3-Cria uma struct Produto com:
int codigo; float preco; int quantidade;
O programa deve:
- ler os dados de um produto;
- calcular o valor total em stock.
Fórmula: valorTotal = preco * quantidade;*/

struct Produto{ //Definir as variaveis que vão ficar dentro de Produto
    int codigo;
    float preco;
    int quantidade;
};

int main(){

    struct Produto p; //Defeni Produto como "p". Assim quando precisar de guardar para ou mostrar, uso "p." e a variavel definida em cima.
    float total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &p.codigo); //Guardar o código dentro da variavel p.codigo
    
    printf("Digite o preco: ");
    scanf("%f", &p.preco); //Guardar o preço dentro da variavel p.preco

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade); //Guardar a quantidade dentro da variavel p.quantidade

    total = p.preco * p.quantidade; //Calcular o valor total

    printf("Valor total do stock e de %.2f", total); //Mostrar o valor usando 2 números décimais (%.2f)

    return 0;
}