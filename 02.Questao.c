#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

struct informacao_do_aluno
{
    char nome[200];
    int dataNascimento;
    float n1;
    float n2;
    float media;
};
struct informacao_do_aluno aluno[3];
int i;
char name[200];
float c;

float calcularMedia(int j)
{
    aluno[j].media = (aluno[j].n1 + aluno[j].n2) / 2;
    return aluno[j].media;
}

char AprovadoOuNao(char *name)
{

    int j;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(name, aluno[i].nome) == 0)
        {
            j = i;
            c = calcularMedia(j);

            if (c >= 7)
            {
                printf("Aluno aprovado.");
            }
            else
            {
                printf("Aluno REPROVADO");
            }
        }
    }
}

int main()
{
    float mediaIndividual;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {

        printf("Informe os dados do Aluno %d:\n", i + 1);

        fflush(stdin);
        printf("Digite o %d nome: ", 1 + i);
        gets(aluno[i].nome);
        fflush(stdin);

        printf("Digite ano de nascimento: ");
        scanf("%d", &aluno[i].dataNascimento);
        fflush(stdin);

        printf("Digite primeira nota: ");
        scanf("%f", &aluno[i].n1);
        fflush(stdin);

        printf("Digite segunda nota: ");
        scanf("%f", &aluno[i].n2);
    }

    fflush(stdin);
    printf("Digite o nome do aluno para verificamos se está APROVADO OU REPROVADO: \n");
    gets(name);
    fflush(stdin);

    AprovadoOuNao(name);

    return 0;
}
