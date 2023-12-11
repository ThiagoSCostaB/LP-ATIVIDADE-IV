
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct produto_do_galpao
{
    char nome[200];
    float preco;
    int Estoque;
};

int codigo;
float calculoFinal;
int i;
int j;
int p;
int produtoEncontrado = 0;
char nomeProduto[200];
char resp[200];
int valorEstoque;
int estoque_atualizado;
struct produto_do_galpao produto[200];
void menu()
{
    printf("================Menu============\n");
    printf("Digite 1 para realizar comopra: \n");
    printf("Digite 2 para consultar estoque:\n");
    printf("Digite 3 para sair do programa: \n");
    scanf("%d", &codigo);
    puts("");
}

float calcularEstoque()
{
    calculoFinal = produto[j].preco * produto[j].Estoque;
    return calculoFinal;
}

int atualizaEstoque()
{
    produto[j].Estoque = produto[j].Estoque + valorEstoque;

    return produto[j].Estoque;
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    do
    {
        menu();

        switch (codigo)
        {
        case 1:
            do
            {
                p = p + 1;
                fflush(stdin);
                printf("Digite o nome do produto: ");
                gets(produto[p].nome);

                printf("Digite o preço: ");
                scanf("%f", &produto[p].preco);

                printf("Digite a quantidade de produto: ");
                scanf("%d", &produto[p].Estoque);
                printf("");

                getchar();

                printf("Continuar cadastrando produto? [S/N] ");
                gets(resp);
                fflush(stdin);

            } while (strcmp(resp, "S") == 0);

            break;
        case 2:

            produtoEncontrado = 0;
            fflush(stdin);
            printf("Digite o nome do produto a ser consultado: ");
            gets(nomeProduto);

            fflush(stdin);
            for (i = 0; i <= c; i++)
            {

                if (strcmp(nomeProduto, produto[i].nome) == 0)
                {
                    produtoEncontrado = 1;
                    j = i;
                    printf("Quantidade ATUAL de ESTOQUE: %d\n", produto[j].Estoque);

                    fflush(stdin);
                    printf("\n Atualizar estoque? [S/N] \n");
                    gets(resp);

                    fflush(stdin);

                    if (strcmp(resp, "S") == 0)
                    {
                        fflush(stdin);
                        printf("Qual valor a adição ao estoque? \n");
                        scanf("%d", &valorEstoque);

                        atualizaEstoque();

                        printf("Estoque atualizado!");
                        printf("Estoque atual: %d\n", produto[j].Estoque);
                    }
                }
            }

            if (produtoEncontrado == 0)
            {
                printf("Produto não localizado.\n");
            }

            break;

        default:
            break;
        }

    } while (codigo != 3);

    return 0;
}
