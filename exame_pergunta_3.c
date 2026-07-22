#include <stdio.h>
#include <windows.h> //Esta linha + a linha 13, permite o terminal mostrar açentos etc.

struct produto //Definir a struct produto
{
    int codigo; //Variaveis dentro da struct
    int quantidade;
    float preco;
    float stock;
};

int main()
{
    SetConsoleOutputCP(65001);

    struct produto p[5]; //definir a stuct como p[5]
    float total = 0, maiorStock = 0;

    for (int i = 0; i < 5; i++) //for para guardar os códigos dos produtos
    {
        printf("Digite o código do %dº produto: ", i+1);
        scanf("%d", &p[i].codigo); //usar p[i].codigo porque p[i] foi o que definimos na linha 15
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++) //for para guardar a quantidade
    {
        printf("Digite a quantidade do %dº produto: ", i+1);
        scanf("%d", &p[i].quantidade); //usar a mesma lógica da linha 22
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++) //for para guardar o preço
    {
        printf("Digite o preço do %dº produto: ", i+1);
        scanf("%f", &p[i].preco); //usar a mesma lógica da linha 22
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++) //for para calcular o valor de stock
    {
        p[i].stock = p[i].preco * p[i].quantidade; //formula para calcular o stock
    }

    maiorStock = p[0].stock; //definir o maiorStock como o primeiro valor

    for (int i = 1; i < 5; i++) //for para verificar se os valores seguintes são maiores (por isso é que começo com i=1), se sim, guardar como maiorStock
    {
        if (maiorStock < p[i].stock)
        {
            maiorStock = p[i].stock;
        }
        total += p[i].stock; //adicionar todos os valores do stock para o total
    }

    for (int i = 0; i < 5; i++) //for para mostrar o stock de cada produto
    {
        printf("O stock do produto %d, é de %.2f\n", p[i].codigo, p[i].stock);
    }

    printf("\n\nO valor total do stock é de %.2f", total);

    return 0;
}