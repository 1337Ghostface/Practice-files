#include <stdio.h>

int main() {

    // Variaveis usadas no programa
    float num1;
    float num2;
    char calc;
    char continuar;

    // Este "do while" vai permitir repetir a calculadora se o utilizador quiser continuar
    do {

        // Titulo
        printf("===== CALCULADORA =====\n");

        // Pedir o primeiro numero
        printf("Introduza o primeiro numero: ");
        scanf("%f", &num1);

        // Ciclo para validar a operacao
        do {
            printf("Introduza a operacao (+, -, *, /): ");
            scanf(" %c", &calc);

            // Verificar se a operacao e invalida. "se calc diferente de"
            if (calc != '+' && calc != '-' && calc != '*' && calc != '/') {
                printf("Operacao invalida. Tente novamente.\n");
            }
        // Enquanto o utilizador nao inserir +, -, * ou /, o programa volta a pedir
        } while (calc != '+' && calc != '-' && calc != '*' && calc != '/');

        // Pedir o segundo numero ao utilizador
        printf("Introduza o segundo numero: ");
        scanf("%f", &num2);

        // Fazer o calculo com a operacao escolhida
        switch (calc) {

            case '+':
                printf("Resultado: %.2f\n", num1 + num2);
                break;

            case '-':
                printf("Resultado: %.2f\n", num1 - num2);
                break;

            case '*':
                printf("Resultado: %.2f\n", num1 * num2);
                break;

            case '/':
                // Antes de dividir, verificar se o segundo numero nao e zero
                if (num2 != 0) {
                    printf("Resultado: %.2f\n", num1 / num2);
                // Se for 0, dar erro
                } else {
                    printf("Erro: nao e possivel dividir por zero.\n");
                }
                break;
        }

        // Perguntar se o utilizador quer fazer outra conta
        printf("Deseja fazer outra conta? (s/n): \n");
        scanf(" %c", &continuar);

    } while (continuar == 's');

    // Mensagem final quando o utilizador escolhe sair
    printf("Programa terminado.\n");

    return 0;
}