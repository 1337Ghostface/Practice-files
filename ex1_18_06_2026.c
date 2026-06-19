#include<stdio.h>

int main(){

    /*1- Leitura e apresentação de valores
    Lê 10 numeros inteiros para um vetor.
    Mostra todos os valores introduzidos.*/

    printf("Parte 1 -Leitura e apresentacao de valores. \n\n");

    int vetor1[10];

    for(int i=0;i<10;i++){
        printf("Digite o numero %d:\n", (i+1));
        scanf("%d", &vetor1[i]);
    }

    printf("Os numeros inseridos foram: ");
    
    for(int i=0;i<10;i++){
        printf("%d, ", vetor1[i]);
    }

    printf("\n\nParte 1 concluida. \n\n\n\n");

    /*2- Soma dos elementos:
    Lê 8 números inteiros para um segundo vetor.
    Calcula e apresenta a soma de todos os elementos.*/

    printf("Parte 2 - Soma dos elementos. \n\n");

    int vetor2[8], soma=0;

    for(int i=0;i<8;i++){
        printf("Digite o numero %d:\n", (i+1));
        scanf("%d", &vetor2[i]);
        soma += vetor2[i];
    }

    printf("A soma de todos os valores e de: %d", soma);

    printf("\n\nParte 2 - concluida. \n\n\n\n");

    /*3-Maior e menor valor:
    Lê 10 números inteiros para um terceiro vetor.
    Determina e apresenta: O maior valor, O menor valor, A posição onde aparece o maior, A posição onde aparece o menor.*/


    printf("Parte 3 - Maior e menor valor. \n\n");

    int vetor3[10], valMaior, valMenor, posMaior=0, posMenor=0;

    for(int i=0;i<10;i++){
        printf("Digite o numero %d:\n", (i+1));
        scanf("%d", &vetor3[i]);
    }

    valMenor = vetor3[0];
    valMaior = vetor3[0];

    for(int i=0;i<10;i++){

        if(vetor3[i] < valMenor){
            valMenor = vetor3[i];
            posMenor = i+1;
        }

        if(vetor3[i] > valMaior){
            valMaior = vetor3[i];
            posMaior = i+1;
        }
    }

    printf("O maior valor e %d, e esta na posicao %d.\n", valMaior, posMaior);
    printf("O menor valor e %d, e esta na posicao %d. \n", valMenor, posMenor);

    printf("\n\nParte 3 - concluida. \n\n\n\n");

    /*4-Média e notas positivas:
    Lê 6 notas (valores reais ou inteiros) para um vetor.
    Calcula e apresenta a média das notas.
    Indica também quantas notas são positivas (>=10)*/

    printf("Parte 4 - Media e notas positivas. \n\n");

    float media=0;
    int vetor4[6], positivas=0, somaMedia=0;

    for(int i=0; i<6; i++){
        printf("Digite a notas: \n");
        scanf("%d", &vetor4[i]);

            if(vetor4[i] >= 10){
                positivas++;
            }
        somaMedia = somaMedia + vetor4[i];
    }
    media = media + somaMedia / 6;

    printf("A media e de %.2f. E ha %d positivas.\n", media, positivas);

    printf("\n\nParte 4 - concluida. \n\n\n\n");

    /*5-Contagem de pares e ímpares:
    Lê 12 números inteiros para um vetor. indica quantos valores são pares e quantos são ímpares.*/

    int vetor5[12], par=0, impar=0;

    printf("Parte 5 - Contagem de pares e impares. \n\n");

    for(int i=0;i<12;i++){
        printf("Insira os numeros: \n");
        scanf("%d", &vetor5[i]);
        
        if(vetor5[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }

    printf("Tem %d pares e %d impar.\n", par, impar);

    printf("\n\nParte 5 - concluida. \n\n\n\n");

    /*6-pesquisa de um número:
    Lê 10 números inteiros para um vetor.
    Pede ao utilizador um número a procurar.
    Indica se o número existe no vetor e, caso exista, em que posição aparece.*/

    int vetor6[10], num, posi=0;
    bool flag = false;

    printf("Parte 6 - Pesquisa de um numero. \n\n");

    for(int i=0;i<10;i++){
        printf("Insira os numeros: \n");
        scanf("%d" , &vetor6[i]);
    }

    printf("\nDigite o numero que procura: \n");
    scanf("%d", &num);

    for(int i=0;i<10;i++){
        if(num == vetor6[i]){
            posi = i;
            flag = true;
        }
    }

    if(flag=false){
        printf("O numero nao foi encontrado.");
    }
    if(flag=true){
        printf("O numero %d, foi encontrado na posicao %d", num, (posi+1));
    }

    printf("\n\nParte 6 - concluida. \n\n\n\n");

    /*7-Inversão do vetor:
    Lê 10 números inteiros para um vetor.
    Mostra o vetor pela ordem inversa.*/

    int vetor7[10];

    printf("Parte 7 - Inverter vetor. \n\n");

    for(int i=0;i<10;i++){
        printf("Digite os numeros: \n");
        scanf("%d", &vetor7[i]);
    }

    printf("Os numeros na ordem invertida sao:");

    for(int i=9;i>=0;i--){
        printf(" %d,", vetor7[i]);
    }

    printf("\n\nParte 7 - concluida. \n\n\n\n");

    return 0;
}