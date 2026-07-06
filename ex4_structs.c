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

struct Retangulo{  //Definir as variaveis que vão ficar dentro de Retangulo. As structs devem ser declaradas antes do "int main"
    float largura;
    float altura;
};


int main(){

    struct Retangulo r; //Defeni retangulo como "r". Assim quando precisar de guardar para ou mostrar, uso "r." e a variavel definida em cima.
    float area;
    float perimetro;

    printf("Digite a largura: ");
    scanf("%f", &r.largura); //Guardar a largura como float dentro de r.largura

    printf("Digite a altura: ");
    scanf("%f", &r.altura); //Guardar a altura como float dentro de r.altura

    area = r.largura * r.altura; //Formula para calcular a area

    perimetro = 2 * (r.largura + r.altura); //Formula para calcular o perimetro

    printf("A area do retangulo e: %.2f.\nO perimetro e: %.2f", area, perimetro); /*uso %.2f porque quero que apenas mostre 2 números decimais.
    Se quiser mostrar 1 faço %.1f se quiser usar 3 faço %.3f 
    */
    return 0;
}