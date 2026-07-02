#include <stdio.h>

struct pessoa {
    int idade;
    float altura;
    int peso;
};

int main (){

    struct pessoa p;

    float bmi;

    printf("\nDigite a sua idade: ");
    scanf("%d", &p.idade);

    printf("\nDigite a sua altura: ");
    scanf("%f", &p.altura);

    printf("\nDigite o seu peso: ");
    scanf("%d", &p.peso);

    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    printf("Peso: %d\n",p.peso);
    
    bmi = p.peso / (p.altura*p.altura);

    printf("O seu IMC e de: %.2f", bmi);

    return 0;
}