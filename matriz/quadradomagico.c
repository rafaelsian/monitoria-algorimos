#include <stdio.h>

int main ()
{
    int i, j, somaP, somaS, somaL, somaC, n, quadrado = 1;
    somaP = somaS = somaL = somaC = 0;
    printf("Digite uma tamanho para a matriz: ");
    scanf("%d", &n);
    int m[n][n];

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Digite a posicao %d %d da matriz: ",i,j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    /*for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }*/

    system("cls");

    for (i=0; i<n; i++)
    {
        somaP += m[i][i];
    }

    j = n-1;
    for (i=0; i<n; i++)
    {
        somaS += m[i][j];
        j--;
    }

    if (somaP != somaS)
    {
        quadrado = 0;
    }

    for (i=0; i<n; i++)
    {
        somaL = 0;
        for (j=0; j<n; j++)
        {
            somaL += m[i][j];
        }
        if (somaL != somaP)
        {
            quadrado = 0;
            break;
        }
    }

    for (i=0; i<n; i++)
    {
        somaC = 0;
        for (j=0; j<n; j++)
        {
            somaC += m[j][i];
        }
        if (somaC != somaP)
        {
            quadrado = 0;
            break;
        }
    }

    if (somaP == somaC == somaL == somaS)
    {
        quadrado = 1;
    }

    if (quadrado)
    {
        printf("E um quadrado magico");
    }
    else
    {
        printf("Nao e um quadrado magico");
    }
    return 0;
}
