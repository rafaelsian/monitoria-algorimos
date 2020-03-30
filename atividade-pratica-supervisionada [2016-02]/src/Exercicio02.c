#include <stdio.h>
#include <time.h>
#define GABARITO 100

float calculaPercentual (int quantidadeAcertada, int totalAlunos);

int main ()
{
    srand(time(NULL));
    int matrizSimulado[100][GABARITO], gabarito[GABARITO], questoesAcertadas[GABARITO];
    int quantidadeAlunos, i, j, tamanhoGabarito = 0, aux;
    float maiorNota = 0.0, menorNota = -1.0;

    printf ("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    i = 0;
    while (i < GABARITO)
    {
        printf("\nDigite a resposta %d do gabarito: ", tamanhoGabarito);
        //scanf("%d", &aux);
        aux = rand()%6;

        if (aux == 0)
        {
            printf("\nForam cadastradas %d questoes no gabarito!", tamanhoGabarito);
            break;
        }
        else if (aux < 1 || aux > 5)
        {
            printf("\nAs respostas aceitas vão de 1 até 5!");
            continue;
        }

        gabarito[i] = aux;
        tamanhoGabarito++;
        i++;
    }

    for (i = 0; i < tamanhoGabarito; i++)
    {
        questoesAcertadas[i] = 0;
    }

    for (i = 0; i < quantidadeAlunos; i++)
    {
        for (j = 0; j < tamanhoGabarito; j++)
        {
            printf("\nDigite a questao %d do aluno %d: ", i, j);
            do
            {
                //scanf("%d", &aux);
                aux = rand()%6;
            }
            while (aux < 1 || aux > 5);
            matrizSimulado[i][j] = aux;
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < quantidadeAlunos; i++)
    {
        for (j = 0; j < tamanhoGabarito; j++)
        {
            printf("%d\t", matrizSimulado[i][j]);
        }
        printf("\n");
    }

    printf("\n\nGabarito:\n");
    for (i = 0; i < tamanhoGabarito; i++)
    {
        printf("%d\t", gabarito[i]);
    }

    for (i = 0; i < quantidadeAlunos; i++)
    {
        aux = 0;
        for (j = 0; j < tamanhoGabarito; j++)
        {
            if (gabarito[j] == matrizSimulado[i][j])
            {
                aux++;
                questoesAcertadas[j]++;
            }
        }
        printf("\nAluno %d: acertou %d de %d", i, aux, tamanhoGabarito);
    }

    printf("\n\n");
    for (i = 0; i < tamanhoGabarito; i++)
    {
        printf ("\nQuestao %d: %.2f%% de acerto", i, calculaPercentual(questoesAcertadas[i], quantidadeAlunos));
    }

    return 0;
}

float calculaPercentual (int quantidadeAcertada, int totalAlunos)
{
    return (100.0 * quantidadeAcertada) / totalAlunos;
}
