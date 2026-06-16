//Mostra todos os múltiplos de 3 entre 1 e 100.
#include<stdio.h>

int main(){

int n;

    do {
        printf("%d\n", n);
        n=n+3;
    }
    while(n <= 100);

    return 0;
    
}