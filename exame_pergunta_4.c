#include <stdio.h>
#include <windows.h> //necessario em conjunto com o comando --> SetConsoleOutputCP(65001); depois do main para mostrar acentos etc

struct Aluno
{
    int numero, idade, nota;
};

int main()
{
    SetConsoleOutputCP(65001);

    int n, aprovados = 0, melhorNota = 0, maiorIdade = 0, melhorAluno = 0;
    float mediaNotas = 0;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    struct Aluno a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o numero do %dº aluno: ", i + 1);
        scanf("%d", &a[i].numero);
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Digite a idade do aluno número %d: ", a[i].numero);
        scanf("%d", &a[i].idade);

        if (a[i].idade >= 18)
        {
            maiorIdade++;
        }
    }

    printf("\n\n");

for (int i = 0; i < n; i++)
{
    do {
        printf("Digite a nota do aluno nº %d (0 a 20): ", a[i].numero);
        scanf("%d", &a[i].nota);

        if (a[i].nota < 0 || a[i].nota > 20) {
            printf("Nota inválida! Por favor, digite um valor entre 0 e 20.\n");
        }
    } while (a[i].nota < 0 || a[i].nota > 20);        

    if (a[i].nota >= 10)
    {
        aprovados++;
    }

    mediaNotas += a[i].nota;
}

    printf("\n\n");

    mediaNotas = mediaNotas / n;

    melhorNota = a[0].nota;

    for (int i = 1; i < n; i++)
    {
        if (a[i].nota > melhorNota)
        {
            melhorNota = a[i].nota;
            melhorAluno = a[i].numero;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("O aluno nº %d tem %d anos e teve a nota %d.\n", a[i].numero, a[i].idade, a[i].nota);
    }

    printf("\n\n");

    printf("%d alunos estão aprovados.\n", aprovados);
    printf("A média das notas é de %.2f\n", mediaNotas);

    return 0;
}