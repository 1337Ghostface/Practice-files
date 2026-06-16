//Pede ao utilizador um número positivo. Enquanto o número for negatico ou zero, o programa deve voltar a pedir o número

#include <stdio.h>

int main() {

float n;

    do{
    printf("Digite um numero positivo: ");
    scanf("%f", &n);
        if(n <= 0){
            printf("Numero invalido!\n\n");
        }
        else{
            printf("Numero aceite.\n");
            printf("Programa terminado.");
        }
    }while(n <= 0);

    return 0;

}