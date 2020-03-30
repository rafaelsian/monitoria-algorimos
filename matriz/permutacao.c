#include <stdio.h>

int main ()
{
    int n, i, j, soma, permutacao = 1;
    printf("Digite o tamanho da matriz: ");
    scanf("%d",&n);
    int m[n][n];

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Digite a posicao %d %d da matriz: ",i,j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<n; i++)
    {
        soma = 0;
        for (j=0; j<n; j++)
        {
            if(m[i][j] < 0)
            {
                soma -= m[i][j];
            }
            else
            {
                soma += m[i][j];
            }
        }
        if (soma > 1)
        {
            permutacao = 0;
            break;
        }
    }

    for (i=0; i<n; i++)
    {
        soma = 0;
        for (j=0; j<n; j++)
        {
            soma += m[j][i];
        }
        if (soma > 1)
        {
            permutacao = 0;
            break;
        }
    }

    if (permutacao == 0)
    {
        printf("Nao e uma matriz de permutacao");
    }
    else
    {
        printf("E uma matriz de permutacao");
    }

    return 0;
}
