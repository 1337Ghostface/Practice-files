#include <stdio.h>

/*4-Cria uma struct Retangulo com:
float largura; float altura;
O programa deve:
- ler a largura e a altura;
- calcular a área;
- calcular o perímetro.
Fórmulas:
area = largura * altura;
perimetro = 2 * (largura + altura);*/

struct Retangulo{
    float largura;
    float altura;
};


int main(){

    struct Retangulo r;
    float area;
    float perimetro;

    printf("Digite a largura: ");
    scanf("%f", &r.largura);

    printf("Digite a altura: ");
    scanf("%f", &r.altura);

    area = r.largura * r.altura;
    perimetro = 2 * (r.largura + r.altura);

    printf("A area do retangulo e: %.2f.\nO perimetro e: %.2f", area, perimetro);

    return 0;
}