//O programa deve ler números inteiros até o utilizador inserir 0. Mostrar soma dos números introduzidos

#include <stdio.h>

int main() {

int n;
int soma;

    printf("Digite os numeros, para terminar insira 0: ");
    scanf("%d", &n);
    soma = n;

        while(n != 0){
            printf("Introduza o proximo numero: ");
            scanf("%d", &n);
            soma = soma + n;
        }

    printf("A soma dos numeros inseridos e: ");
    printf("%d\n", soma);

return 0;

}