#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

struct funcionariosRegistros
{
    char nome[100];
    int cargo;
    float salario;
};

struct funcionariosRegistros funcionario[200];
int i;
int c;
int j;
int z;
int olharCargo;
char resp[200];
float mediaSalarialProgramador;
float mediaSalarialAnalista;
float mediaProgramadores;
float mediaAnalistas;

float calcularMediaSalarial(int cargos, float novoSalario)
{
    if (cargos == 1)
    {
        mediaSalarialProgramador = (mediaSalarialProgramador + novoSalario) / j;
        return mediaSalarialProgramador;
    }

    if (cargooo == 2)
    {
        mediaSalarialAnalista = (mediaSalarialAnalista + novoSalario) / z;
        return mediaSalarialAnalista;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    do
    {
        c = c + 1;
        fflush(stdin);
        printf("Digite o nome do FUNCIONÁRIO: ");
        gets(funcionario[c].nome);

        printf("\nEscolha o CARGO: ");
        printf("\n1 - Programador");
        printf("\n2 - Analista \n");
        scanf("%d", &funcionario[c].cargo);

        printf("\nDigite a SALÁRIO: ");
        scanf("%f", &funcionario[c].salario);

        if (funcionario[c].cargo == 1)
        {
            j = j + 1;
            mediaProgramadores = calcularMediaSalarial(funcionario[c].cargo,funcionario[c].salario);
            printf("Média salarial de PROGRAMADORES R$ %f", mediaProgramadores);
        }
        else if (funcionario[c].cargo == 2)
        {
            z = z + 1;
            mediaAnalistas = calcularMediaSalarial(funcionario[c].cargo,funcionario[c].salario);
            printf("Média salarial de ANALISTAS R$ %f", mediaAnalistas);
        }

        getchar();

        printf("\nContinuar cadastrando FUNCIONÁRIOS? [s/n] ");
        gets(resp);
        fflush(stdin);
        printf("");

    } while (strcmp(resp, "s") == 0);

    printf("Deseja ver a média salário de qual CARGO? 1 ou 2 :");
    scanf("%d", &olharCargo);
    printf("");

    switch (olharCargo)
    {
    case 1:
        printf("Média salarial de PROGRAMADORES R$ %f", mediaProgramadores);
        break;

    case 2:
        printf("Média salarial de ANALISTAS R$ %f", mediaAnalistas);
        break;

    default:
        break;
    }

    return 0;
}
