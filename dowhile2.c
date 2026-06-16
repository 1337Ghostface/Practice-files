//O programa deve ler números inteiros até o utilizador inserir 0. Mostrar soma dos números introduzidos

#include <stdio.h>

int main() {

int n;
int i=0;
int soma=0;

    printf("Digite os numeros, para terminar insira 0: \n");
    scanf("%d", &n);

        while(n != 0){
            printf("Introduza o proximo numero: ");
            scanf("%d", &n);
            soma = soma + n;
        }

    printf("Os numeros inseridos foram: ");
    printf("%d\n", soma);

return 0;

}