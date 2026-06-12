#include <stdio.h>

//Algoritmo para registar as despesas de uma semana.
//O algoritmo deve pedir ao utilizador quanto gastou em cada um dos 7 dias da semana. No fim, deve mostrar o total gasto, a media diaria,
//a maior despesa, o dia em que aconteceu a maior despesa e quantos dias tiveram despesa igual a zero.

//Regras:
//O programa deve guardar as 7 despesas num vetor.
//Nao pode aceitar despesas negativas. Se o utilizador escrever um valor negativo, o algoritmo deve mostrar uma mensagem de erro e voltar a pedir
//a despesa desse mesmo dia.
//No fim, o algoritmo deve calcular:
//Total gasto
//Media diaria
//Maior despesa
//Dia da maior despesa
//Dias sem gastar dinheiro

float semana[7];
float total;
float mediaDiaria;
float maiorDespesa=0;
int diaMaior;
int zero;
int i;

int main () {

    printf("---Sumário de despesas semanais---\n\n");

    for(i=0;i<7;i++){
        printf("Digite o valor do dia %d \n\n", i+1);
        scanf("%f", &semana[i]);

        if(semana[i] == 0){
            zero++;
        }
        if(semana[i]>maiorDespesa){
            maiorDespesa=semana[i];
            diaMaior=i;
        }
        total= total+semana[i];
    }

    mediaDiaria=semana[i] / 7;

    printf("O total gasto este mes foi de %.2f. A maior despesa foi %.2f no dia %d.\n\n", total, maiorDespesa, diaMaior);

    if(zero != 0){
        printf("Nao teve despesas em %d dias.\n\n", zero);
    }

    printf("---Programa terminado---.\n");

    return 0;
}