#include <stdio.h>

int main(){

    int linhas, colunas, soma=0, maior=0, posLinhaMaior=0, posColunaMaior=0, somaDiagonal=0;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o numero da linha %d e coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posLinhaMaior = i;
                posColunaMaior = j;
            }
        }

        printf("\n");
    }
    printf("A soma de todos os elementos da matriz e: %d\n", soma);
    printf("O maior elemento da matriz e: %d\n", maior);
    printf("A posicao do maior elemento e: linha %d e coluna %d\n", (posLinhaMaior+1), (posColunaMaior+1));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
            if(i==j){
                printf("%d\n", matriz[i][j]);
                somaDiagonal += matriz[i][j];
            }
        }
    }
    printf("A soma dos elementos da diagonal principal e: %d\n", somaDiagonal);

    return 0;
}