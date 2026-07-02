#include <stdio.h>

    struct Aluno{
        int idade;
        float nota;
    };
    
int main(){

    int n;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    struct Aluno a[n];


    for(int i=0; i<n; i++){

        printf("\nDigite a idade do aluno %d: ", i+1);
        scanf("%d", &a[i].idade);

        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%f", &a[i].nota);

    }

    for(int i=0; i<n; i++){

        printf("\nAluno numero %d, tem %d anos", i+1, a[i].idade);

        if(a[i].nota>=10){
            printf(" e passou com nota %.2f", a[i].nota);
        }
        else{
            printf(" nao passou.");
        }
    }
    return 0;
}