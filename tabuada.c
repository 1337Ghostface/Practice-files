//Lê um número inteiro e mostra a sua tabuada de 1 até 10

#include <stdio.h>

int main() {
    
int n;

    printf("Escolha um numero: ");
    scanf("%d", &n);

        for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
        }
    
return 0;

}