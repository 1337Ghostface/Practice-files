#include <stdio.h>
#include <windows.h> //necessario depois do main para mostrar acentos etc --> SetConsoleOutputCP(65001);
#include <stdlib.h>  //necessario para poder usar o comando de limpar terminal --> system("cls");

int main()
{

    SetConsoleOutputCP(65001); // configura o terminal para mostrar acentos etc.

    int pass = 8474, opcao, tentativas = 3, pw, voltar;

    do
    {
        system("cls"); // comando para limpar terminal

        printf("       .-------.     \n");
        printf("      /   .-.   \\   \n");
        printf("     |   /   \\   |  \n");
        printf("     |  |     |  |   \n");
        printf("  .--'--'-----'--'--.\n");
        printf("  | [+] Fechado [+] |\n");
        printf("  |                 |\n");
        printf("  | [_] [_] [_] [_] |\n");
        printf("  |                 |\n");
        printf("  '-----------------'\n\n");

        printf("O objetivo do jogo é descobrir qual é a password.\nBoa sorte!\n\n");

        printf("1 - Ver mensagens\n");
        printf("2 - Consultar agenda\n");
        printf("3 - Abrir pasta de fotografias\n");
        printf("4 - Ver histórico do sistema\n");
        printf("5 - Ler ficheiro corrompido\n");
        printf("6 - Introduzir password\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao < 0 || opcao > 6)
        { // Se não escolheram uma opção válida
            printf("\n\nOpção inválida!\n\n");
            system("pause"); // Este comando faz com que o sistema espera até o usuário premir qualquer tecla
        }
        else
        {                  // Se a opção for válida
            system("cls"); // Comando limpa o ecra e passa para a opção escolhida

            switch (opcao)
            {

            case 1:
            {
                printf("\n\nMENSAGEM DE: UNKNOWN\n\n");
                printf("O código continua igual.\n\n");
                printf("O primeiro número corresponde ao mês em que tudo começou.\n");
                printf("O segundo é metade do primeiro.\n");
                printf("Os dois últimos estão escondidos noutros ficheiros.\n\n");

                system("pause");

                break;
            }

            case 2:
            {

                printf("\n\nAGENDA\n\n");
                printf("12/08 - Primeira ligação ao servidor\n");
                printf("19/08 - Alteração da password\n");
                printf("27/08 - Sistema bloqueado\n\n");

                system("pause");

                break;
            }

            case 3:
            {

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

            case 4:
            {

                printf("\n\nHISTÓRICO DO SISTEMA\n\n");
                printf("Tentativa falhada às 21:10\n");
                printf("Tentativa falhada às 21:14\n");
                printf("Tentativa falhada às 21:18\n\n");
                printf("AVISO:\n");
                printf("-O último número é a diferença de minutos entre as duas tentativas.\n\n");

                system("pause");

                break;
            }

            case 5:
            {

                printf("\n\nFICHEIRO: ordem.txt\n\n");
                printf("RECUPERAÇÃO PARCIAL\n\n");
                printf("O número relacionado com as imagens aparece antes do número relacionado com o tempo.\n\n");

                system("pause");

                break;
            }

            case 6:
            {

                printf("\n\nIntroduza a password: \n\n");
                scanf("%d", &pw);

                if (pw != pass)
                {                 // Se a password inserida for diferente à password necessária para ganhar
                    tentativas--; // Reduzir o número de tentativas
                    if (tentativas == 0)
                    { // Quando o número de tentativas for 0
                        printf("\nGame Over! Esgotou todas as tentativas.\n\n");
                        printf("A password correta é: Ajd(/S&a8=DJCaa.\n\n");
                        printf("Estou a brincar. Não te vou dizer qual é a password :)\n\n");
                        system("pause");
                        exit(0); // Fecha a consola
                    }
                    printf("Password errada!\n\n");
                    printf("Número de tentativas restantes: %d\n\n", tentativas); // Se ainda tiver tentativas, mostra quantas restantes tem.

                    system("pause");
                }
                else
                {
                    printf("\n\nPassword correta!\n\n");
                    printf("       .-------.     \n");
                    printf("      /   .-.___|        \n");
                    printf("     |   /           \n");
                    printf("     |  |            \n");
                    printf("  .--'--'-----------.\n");
                    printf("  | [+] Aberto! [+] |\n");
                    printf("  |                 |\n");
                    printf("  | [8] [4] [7] [4] |\n");
                    printf("  |                 |\n");
                    printf("  '-----------------'\n\n");
                    system("pause");
                }
                break;
            }
            }
        }
    } while (opcao != 0); // Continua a correr enquanto o utilizador não inserir 0. 0 é a opção para sair do programa.

    return 0;
}