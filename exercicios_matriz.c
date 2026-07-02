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

    int matrizA[3][3], matrizB[3][3], i, j, somaDiagonal1=0, somaDiagonal2=0, somaColuna1=0, somaColuna2=0, somaColuna3=0;

    //Inserir os valores da matriz A
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira os valores da matriz: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    //Copiar os valores da matriz A para a matriz B
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizB[i][j] = matrizA[i][j];
        }
    }

    //Mostrar as duas matrizes
    printf("Matriz A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    //Calcular a soma das colunas
    for(i=0;i<3;i++){
        somaColuna1 = somaColuna1 + matrizA[i][0];
        somaColuna2 = somaColuna2 + matrizA[i][1];
        somaColuna3 = somaColuna3 + matrizA[i][2];
    }

    /*Calcular a soma da primeira diagonal
    somaDiagonal1 = somaDiagonal1 + matrizA[0][0];
    somaDiagonal1 = somaDiagonal1 + matrizA[1][1];
    somaDiagonal1 = somaDiagonal1 + matrizA[2][2];
    */

    /*Calcular a soma da segunda diagonal
    somaDiagonal2 = somaDiagonal2 + matrizA[0][2];
    somaDiagonal2 = somaDiagonal2 + matrizA[1][1];
    somaDiagonal2 = somaDiagonal2 + matrizA[2][0];
    */

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                somaDiagonal1 = somaDiagonal1 + matrizA[i][j];
            }
        }
    }

    for(i=0;i<3;i++){
        somaDiagonal2 = somaDiagonal2 + matrizA[i][2-i];
    }

    //Mostrar os resultados
    printf("Soma da coluna 1: %d\n", somaColuna1);
    printf("Soma da coluna 2: %d\n", somaColuna2);
    printf("Soma da coluna 3: %d\n", somaColuna3);
    printf("Soma da diagonal principal: %d\n", somaDiagonal1);
    printf("Soma da diagonal secundaria: %d\n", somaDiagonal2);

    //Indicar qual das duas diagonais tem maior soma
    if(somaDiagonal1 > somaDiagonal2){
        printf("A diagonal principal tem a maior soma.\n");
    }
    else if(somaDiagonal2 > somaDiagonal1){
        printf("A diagonal secundaria tem a maior soma.\n");
    }
    else{
        printf("As diagonais tem a mesma soma.\n");
    }

    return 0;
}