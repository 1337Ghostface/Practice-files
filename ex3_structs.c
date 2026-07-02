#include <stdio.h>

/*3-Cria uma struct Produto com:
int codigo; float preco; int quantidade;
O programa deve:
- ler os dados de um produto;
- calcular o valor total em stock.
Fórmula: valorTotal = preco * quantidade;*/

struct Produto{
    int codigo;
    float preco;
    int quantidade;
};

int main(){

    struct Produto p;
    float total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &p.codigo);
    
    printf("Digite o preco: ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    total = p.preco * p.quantidade;

    printf("Valor total do stock e de %.2f", total);

    return 0;
}