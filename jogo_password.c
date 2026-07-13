#include <stdio.h>
#include <windows.h> //necessario em conjunto com a primeira linha depois do main para mostrar acentos etc.
#include <stdlib.h> //necessario para poder usar o comando de limpar ecra (esta na linha 11) --> system("cls");

int main() {

    SetConsoleOutputCP(65001); //configura o terminal para mostrar acentos etc.
    
    int pass=8474, opcao, tentativas=3, pw, voltar;

    do{
        system("cls");  //comando para limpar ecra

        printf("\n\n===========================\n=== Descobre a Password ===\n===========================\n\n");
        printf("O objetivo do jogo é descobrir qual é a password. Boa sorte!\n\n");
        
        printf("1 - Ver mensagens\n");
        printf("2 - Consultar agenda\n");
        printf("3 - Abrir pasta de fotografias\n");
        printf("4 - Ver histórico do sistema\n");
        printf("5 - Ler ficheiro corrompido\n");
        printf("6 - Introduzir password\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        
            if(opcao < 0 || opcao > 6){
                printf("\n\nOpção inválida!\n\n");
                system("pause");
            }
            else{
                system("cls");  //comando para limpar ecra
            switch(opcao){
                case 1:{
                    printf("\n\nMENSAGEM DE: UNKNOWN\n\n");
                    printf("O código continua igual.\n\n");
                    printf("O primeiro número corresponde ao mês em que tudo começou.\n");
                    printf("O segundo é metade do primeiro.\n");
                    printf("Os dois últimos estão escondidos noutros ficheiros.\n\n");

                    system("pause"); //usado para pausar o programa ate o usuario premir uma tecla

                    break;
                }
                case 2:{
                    printf("\n\nAGENDA\n\n");
                    printf("12/08 - Primeira ligação ao servidor\n");
                    printf("19/08 - Alteração da password\n");
                    printf("27/08 - Sistema bloqueado\n\n");

                    system("pause");

                    break;
                }
                case 3:{
                    printf("\n\nPASTA: FOTOGRAFIAS\n\n");
                    printf("foto_01.jpg\n");
                    printf("foto_02.jpg\n");
                    printf("foto_03.jpg\n");
                    printf("foto_04.jpg\n");
                    printf("foto_05.jpg\n");
                    printf("foto_06.jpg\n");
                    printf("foto_07.jpg\n\n");
                    printf("NOTA:\n");
                    printf("-Apaguei todas as fotografias sem importância.\n\n");

                    system("pause");

                    break;
                }
                case 4:{
                    printf("\n\nHISTORICO DO SISTEMA\n\n");
                    printf("Tentativa falhada às 21:10\n");
                    printf("Tentativa falhada às 21:14\n");
                    printf("Tentativa falhada às 21:18\n\n");
                    printf("AVISO:\n");
                    printf("-O último número é a diferença de minutos entre as duas tentativas.\n\n");

                    system("pause");

                    break;
                }
                case 5:{
                    printf("\n\nFICHEIRO: ordem.txt\n\n");
                    printf("RECUPERAÇÃO PARCIAL\n\n");
                    printf("O número relacionado com as imagens aparece antes do número relacionado com o tempo.\n\n");

                    system("pause");

                    break;
                }
                case 6:{
                    printf("\n\nIntroduza a password: \n\n");
                    scanf("%d", &pw);

                    if(pw != pass){
                        tentativas --;
                        printf("Password errada!\n\n");
                        printf("Numero de tentativas restantes: %d\n\n", tentativas);

                        system("pause");
                    }
                    else{
                        printf("Password correta!\n\n");
                        system("pause");                        
                    }
                    break;
                }
            }
        }
    }while (opcao != 0);
    
    return 0;
}