#include <stdio.h>

int main() {

    int matriz[5][5], soma = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o numero para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) {
        int coluna = (5 - 1) - i;
        soma = soma + matriz[i][coluna];
        printf("Adicionando %d -> Soma atual: %d\n", matriz[i][coluna], soma);
    }

    printf("\nSoma Final da Diagonal Secundaria: %d\n", soma);
    return 0;
}
