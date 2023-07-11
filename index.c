#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
typedef struct
{
    char login[30];
    char senha[30];
} pessoa;
pessoa p[1];

int main()
{
    setlocale(LC_ALL, "portuguese");

    char resp1, resp2, resp3, resp4, login[30], senha[30];
    strcpy(p[0].login, "diego@gmail.com");
    strcpy(p[0].senha, "12345");
    int c = 0, e = 0;
    float media = 0;

    do
    {
        printf("\n\tlogin:");
        scanf("%s", login);
        printf("\n\tsenha");
        scanf("%s", senha);

        if ((strcmp(login, p[0].login) == 0) && (strcmp(senha, p[0].senha) == 0))
        {
            printf("\tUsuario logado");
        }
        else
        {
            printf("Loguin e/ou senha incorretos.\n");
        }
    } while ((strcmp(login, p[0].login) == 1) || (strcmp(senha, p[0].senha) == 1));

    printf("\t\t\tQuestao 1\n\n");
    printf("\t\t\tQual dado abaixo se refere ao tipo float?\n\n");
    printf("\t\ta) Numero de alunos em uma sala de aula.\n");
    printf("\t\tb) Numero de latas de refrigerante em um estoque.\n");
    printf("\t\tc) Saldo bancario de um cliente.\n");
    printf("\t\td) Todas as alternativas corretas.\n");

    do
    {
        printf("\t\tDigite sua resposta: ");
        scanf("%s", &resp1);
        if ((resp1 == 'c') || (resp1 == 'C'))
        {
            printf("\tResposta correta.\n\n\n");
            media += 25;
            c++;
        }
        else if ((resp1 == 'a') || (resp1 == 'b') || (resp1 == 'd') || (resp1 == 'A') || (resp1 == 'B') || (resp1 == 'D'))
        {
            printf("\tResposta errada.\n\n\n");
            e++;
        }

        else
        {
            printf("\tResposta invalida.\n\n\n");
        }
    } while ((resp1 != 'a') && (resp1 != 'A') && (resp1 != 'b') && (resp1 != 'B') && (resp1 != 'c') && (resp1 != 'C') && (resp1 != 'd') && (resp1 != 'D'));

    printf("\t\t\tQuestao 2 \n\n");
    printf("\t\t\t\tSobre definicao e utilizacao de variavel responda:\n\n");
    printf("\t\ta) Sao areas na memoria do computador utilizadas pelo programa para guardar valores que serao utilizada por eles durante a execucao do algoritmo.\n");
    printf("\t\tb) Cada variavel pode ter associada a ela um valor de um determinado tipo de dados.\n");
    printf("\t\tc) A variavel pode ser do tipo numerico, caractere ou logico.\n");
    printf("\t\td) Todas as alternativas corretas.\n");

    do
    {
        printf("\t\tDigite sua resposta: ");
        scanf("%s", &resp2);
        if ((resp2 == 'd') || (resp2 == 'D'))
        {
            printf("\tResposta correta.\n\n\n");
            media += 25;
            c++;
        }
        else if ((resp2 == 'a') || (resp2 == 'b') || (resp2 == 'c') || (resp2 == 'A') || (resp2 == 'B') || (resp2 == 'C'))
        {
            printf("\tResposta errada.\n\n\n");
            e++;
        }
        else
        {
            printf("\tResposta invalida.\n\n\n");
        }
    } while ((resp2 != 'a') && (resp2 != 'A') && (resp2 != 'b') && (resp2 != 'B') && (resp2 != 'c') && (resp2 != 'C') && (resp2 != 'd') && (resp2 != 'D'));

    printf("valor de media %f", media);

    printf("\t\t\tQuestao 3\n\n");
    printf("\t\tPara definir (nomear) variavel deve-se seguir algumas regras, responda:\n\n");
    printf("\t\ta) Preferencialmente devem ter relacao com o valor que a variavel esta guardando.\n");
    printf("\t\tb) Um nome de variavel deve necessariamente começar com uma letra.\nn");
    printf("\t\tc) Um nome de variavel nao devera ser uma palavra reservada a uma instrucao dalinguagem usada.\n");
    printf("\t\td) Todas alternativas corretas.\n");

    do
    {
        printf("\t\tDigite sua resposta: ");
        scanf("%s", &resp3);
        if ((resp3 == 'd') || (resp3 == 'D'))
        {
            printf("\tResposta correta.\n\n\n");
            media += 25;
            c++;
        }
        else if ((resp3 == 'a') || (resp3 == 'b') || (resp3 == 'c') || (resp3 == 'A') || (resp3 == 'B') || (resp3 == 'C'))
        {
            printf("\tResposta errada.\n\n\n");
            e++;
        }
        else
        {
            printf("\tResposta invalida.\n\n\n");
        }
    } while ((resp3 != 'a') && (resp3 != 'A') && (resp3 != 'b') && (resp3 != 'B') && (resp3 != 'c') && (resp3 != 'C') && (resp3 != 'd') && (resp3 != 'D'));

    printf("\t\t\tQuestao 4\n\n");
    printf("\t\tQual e o comando de entrada de dados?\n\n");
    printf("\t\ta) scanf()\n");
    printf("\t\tb) print_r()\n");
    printf("\t\tc) printf()\n");
    printf("\t\td) Todas alternativas corretas.\n");

    do
    {
        printf("\t\tDigite sua resposta: ");
        scanf("%s", &resp4);
        if ((resp4 == 'a') || (resp4 == 'A'))
        {
            printf("\tResposta correta.\n\n\n");
            media += 25;
            c++;
        }
        else if ((resp4 == 'b') || (resp4 == 'c') || (resp4 == 'd') || (resp4 == 'B') || (resp4 == 'C') || (resp4 == 'D'))
        {
            printf("\tResposta errada.\n\n\n");
            e++;
        }
        else
        {
            printf("\tResposta invalida.\n\n\n");
        }
    } while ((resp4 != 'a') && (resp4 != 'A') && (resp4 != 'b') && (resp4 != 'B') && (resp4 != 'c') && (resp4 != 'C') && (resp4 != 'd') && (resp4 != 'D'));

    printf("valor de media %f", media);

    printf("\t\t\t\tVoce acertou %i questoes.\n", c);
    printf("\t\t\t\tvoce errou %i questoes.\n", e);
    printf("\t\t\t\tSua media ficou %2.2f", media / 4);
    return 0;
}
