#include<stdio.h>
#include<stdbool.h> //adicionar esta linha se quiser usar boolean (true - false)

int main(){

    int opcao; //variavel para switch

    printf("Escolha o exercicio que quer fazer:\n");
    printf("1 - Leitura e apresentacao de valores\n");
    printf("2 - Soma dos elementos\n");
    printf("3 - Maior e menor valor\n");
    printf("4 - Media e notas positivas\n");
    printf("5 - Contagem de pares e impares\n");
    printf("6 - Pesquisa de um numero\n");
    printf("7 - Inversao do vetor\n");
    printf("Opcao: ");
    scanf("%d", &opcao); //guardar o numero selecionado pelo utilizador para usar no switch case

    switch(opcao){

        case 1:{
            /*1- Leitura e apresentação de valores
            Lê 10 numeros inteiros para um vetor.
            Mostra todos os valores introduzidos.*/

            printf("Parte 1 -Leitura e apresentacao de valores. \n\n");

            int vetor1[10]; //Criar vetor para guardar os 10 valores

            for(int i=0;i<10;i++){ //"for" para ler e guardar os numeros inseridos no vetor
                printf("Digite o numero %d:\n", (i+1));
                scanf("%d", &vetor1[i]);
            }

            printf("Os numeros inseridos foram: "); 
            
            for(int i=0;i<10;i++){ //"for" para mostrar os valores inseridos
                printf("%d, ", vetor1[i]);
            }

            printf("\n\nParte 1 concluida.\n\n\n\n");

            break;
        }

        case 2:{
            /*2- Soma dos elementos:
            Lê 8 números inteiros para um segundo vetor.
            Calcula e apresenta a soma de todos os elementos.*/

            printf("Parte 2 - Soma dos elementos. \n\n");

            int vetor2[8], soma=0;

            for(int i=0;i<8;i++){ //"for" para ler e guardar os numeros inseridos no vetor
                printf("Digite o numero %d:\n", (i+1)); //aqui meto (i+1) para mostrar a posiçao do vetor. Tem que se meter +1 para não mostrar ao usuario a primeira posição como 0
                scanf("%d", &vetor2[i]);
                soma += vetor2[i]; //fazer a soma
            }

            printf("A soma de todos os valores e de: %d", soma);

            printf("\n\nParte 2 concluida.\n\n\n\n");

            break;
        }

        case 3:{
            /*3-Maior e menor valor:
            Lê 10 números inteiros para um terceiro vetor.
            Determina e apresenta: O maior valor, O menor valor, A posição onde aparece o maior, A posição onde aparece o menor.*/


            printf("Parte 3 - Maior e menor valor. \n\n");

            int vetor3[10], valMaior, valMenor, posMaior=1, posMenor=1;

            for(int i=0;i<10;i++){ //"for" para ler e guardar os numeros inseridos no vetor
                printf("Digite o numero %d:\n", (i+1));
                scanf("%d", &vetor3[i]);
            }

            valMenor = vetor3[0]; //definir o valor menor como o valor que está na posição 0
            valMaior = vetor3[0]; //definir o valor maior como o valor que está na posição 0

            for(int i=0;i<10;i++){ //"for" para procurar o valor menor e maior

                if(vetor3[i] < valMenor){ //"if" o valor de vetor3 na posição i for menor que o valor guardado na variavel
                    valMenor = vetor3[i]; //guardar o novo valor
                    posMenor = i+1; //guardar a posição do valor menor que está em i + 1. +1 para mostrar de 1 a 10 em vez de mostrar 0 a 9.
                }

                if(vetor3[i] > valMaior){ //"if" o valor de vetor3 na posição i for maior que o valor guardado na variavel
                    valMaior = vetor3[i]; //guardar o novo valor
                    posMaior = i+1; //guardar a posição do valor maior que está em i + 1. +1 para mostrar de 1 a 10 em vez de mostrar 0 a 9.
                }
            }

            printf("O maior valor e %d, e esta na posicao %d.\n", valMaior, posMaior); //mostrar valor maior e posição maior
            printf("O menor valor e %d, e esta na posicao %d. \n", valMenor, posMenor);

            printf("\n\nParte 3 - concluida. \n\n\n\n");

            break;
        }

        case 4:{
            /*4-Média e notas positivas:
            Lê 6 notas (valores reais ou inteiros) para um vetor.
            Calcula e apresenta a média das notas.
            Indica também quantas notas são positivas (>=10)*/

            printf("Parte 4 - Media e notas positivas. \n\n");

            float media=0;
            int vetor4[6], positivas=0, somaMedia=0;

            for(int i=0; i<6; i++){ //"for" para ler e guardar os numeros inseridos no vetor
                printf("Digite a notas: \n");
                scanf("%d", &vetor4[i]);

                    if(vetor4[i] >= 10){ //"if" vetor4[i] for maior ou igual a 10
                        positivas++; //adicionar 1 ao contador positivas
                    }
                somaMedia = somaMedia + vetor4[i]; //somar os valores todos
            }
            media = media + somaMedia / 6; //calcular a media

            printf("A media e de %.2f. E ha %d positivas.\n", media, positivas);

            printf("\n\nParte 4 - concluida. \n\n\n\n");

            break;
        }

        case 5:{
            /*5-Contagem de pares e ímpares:
            Lê 12 números inteiros para um vetor. indica quantos valores são pares e quantos são ímpares.*/

            int vetor5[12], par=0, impar=0;

            printf("Parte 5 - Contagem de pares e impares. \n\n");

            for(int i=0;i<12;i++){ //"for" para ler e guardar os numeros inseridos no vetor
                printf("Insira os numeros: \n");
                scanf("%d", &vetor5[i]);
                
                if(vetor5[i] % 2 == 0){ //"if" restante de vetor5[i] % 2 for igual a 0
                    par++; //contador par +1
                }
                else{ //"else"
                    impar++; //contador impar +1
                }
            }

            printf("Tem %d pares e %d impar.\n", par, impar);

            printf("\n\nParte 5 - concluida. \n\n\n\n");

            break;
        }

        case 6:{
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

            do{
            printf("\nDigite o numero que procura: \n");
            scanf("%d", &num);

            for(int i=0;i<10;i++){
                if(num == vetor6[i]){
                    posi = i;
                    flag = true;
                }
            }

            if(flag==false){
                printf("O numero nao foi encontrado.");
            }
            }while(flag==false);

            if(flag==true){
                printf("O numero %d, foi encontrado na posicao %d", num, (posi+1));
            }

            printf("\n\nParte 6 - concluida. \n\n\n\n");

            break;
        }

        case 7:{
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

            break;
        }

        default:{
            printf("Opcao invalida.\n");
            break;
        }
    }

    return 0;
}