#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Aluno{
    int idade;
    float nota;
    char nome[50];
};
    
int main(){

    int n,c;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    struct Aluno a[n];


    for(int i=0; i<n; i++){

        printf("Digite o nome do aluno %d: ", i+1);
        while ((c = getchar()) != '\n' && c != EOF) { } //descarta todos os caracteres restantes e o "enter" deixados no buffer.
        fgets(a[i].nome, 49, stdin); //o fgets guarda espaços sempre que o utilizador pressiona enter. isto causa problemas.
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0'; //esta linha substitui o "enter" ou seja \n por \0. o \0 define o final de uma string.
        a[i].nome[0] = toupper(a[i].nome[0]); //toupper faz com que a letra na posição selecionada seja maiuscula. Neste caso nome[0]. A letra na posição 0.
        
        printf("A sua idade: ");
        scanf("%d", &a[i].idade);
        printf("E a sua nota: ");
        scanf("%f", &a[i].nota);
    }

    for(int i=0; i<n; i++){

        printf("\nAluno numero %d, chamado %s tem %d anos", i+1, a[i].nome , a[i].idade);

        if(a[i].nota>=10){
            printf(" e passou com nota %.2f", a[i].nota);
        }
        else{
            printf(" e nao passou.");
        }
    }
    return 0;
}