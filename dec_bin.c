#include <stdio.h>

int main() {

    int decimal;
    int valores[7] = {64, 32, 16, 8, 4, 2, 1}; //defino os valores do vetor baseado no metodo que uso

    printf("Insere um numero decimal entre 0 e 127: "); //usando o vetor apenas ate 64, so permite que o maior numero inserido seja 127 porque o proximo valor e 128. e 128 nao cabe dentro de 127

    if (scanf("%d", &decimal){ //ler numero inserido.
        printf("Erro: tens de inserir um numero inteiro.\n"); //se o utilizador nao meter numero inteiro, da erro
        return 1; //termina o programa
    }

    if (decimal < 0 || decimal > 127){ //verificar se o numero esta dentro do limite
        printf("Erro: o numero tem de estar entre 0 e 127.\n"); //se o numero for menor que 0 ou maior que 127, dar erro
        return 1; //termina o programa
    }

    for (int i = 0; i < 7; i++){ //percorrer os valores 64, 32, 16, 8, 4, 2, 1 no vetor
        if (decimal >= valores[i]){ //se o numero ainda da para ser retirado do valor atual
            printf("1"); //mostrar 1
            decimal = decimal - valores[i]; //subtrair o valor

        } else{ //se nao
            printf("0"); //mostrar 0
        }
    }

    return 0;
}