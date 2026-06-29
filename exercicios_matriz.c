#include <stdio.h>

/*1-Lê uma matriz 3x3 e mostra a soma de cada coluna.
2-Lê uma matriz 3x3 e mostra os elementos da diagonal secundária.
A diagonal secundária é formada por:
matriz[0][2]
matriz[1][1]
matriz[2][0]
3- Lê uma matriz 3x3 e calcula:
soma da diagonal principal;
soma da diagonal secundária.
No final, indica qual das duas diagonais tem maior soma.
4- Lê uma matriz 3x3 chamada A. Copia todos os seus valores para outra matriz
chamada B.
No final, mostra as duas matrizes.*/

int main(){

    int matrizA[3][3], matrizB[3][3], i, j, somaDiagonal1, somaDiagonal2, somaColuna1, somaColuna2, somaColuna3;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira os valores da matriz: ");
            scanf("%d", &matrizA[i][j]);
        }
    }



    return 0;
}