#include <stdio.h>

int main()
{
    int i, j, n, somaDiagSec = 0;

    printf ("Digite um numero N: ");
    scanf("%d", &n);

    int m[n][n];

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("Digite o elemento %d %d da matriz: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d \t\t", m[i][j]);
        }
        printf("\n");
    }

    j = n - 1;
    for (i=0; i<n; i++)
    {
        somaDiagSec += m[i][j];
        j--;
    }

    printf("\nSoma da diagonal secundaria: %d", somaDiagSec);

    return 0;
}
