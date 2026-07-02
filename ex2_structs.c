#include <stdio.h>

int maint(){

    struct Aluno{
        int numero;
        int idade;
        float nota;
    };

    struct Aluno a1;

    printf("\nDigite o seu numero: ");
    scanf("%d", &a1.numero);

    printf("\nDigite a sua idade: ");
    scanf("%d", &a1.idade);

    printf("\nDigite a sua nota: ");
    scanf("%f", &a1.nota);

    printf("\nAluno numero %d, tem %d anos", a1.numero, a1.idade);

    if(a1.nota>=10){
        printf(" e passou.");
    }
    else{
        printf(" nao passou.");
    }

    return 0;
}