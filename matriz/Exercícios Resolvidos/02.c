#include <stdio.h>
#include <time.h>
#define T 3

int main()
{
    srand(time(NULL));
    int m[T][T], i, j, soma = 0, somaDiagPrinc = 0, somaDiagSec = 0;

    for (i=0; i<T; i++)
    {
        for (j=0; j<T; j++)
        {
            m[i][j] = rand()%10;
        }
    }

    for (i=0; i<T; i++)
    {
        for (j=0; j<T; j++)
        {
            printf("%d \t\t", m[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<T; i++)
    {
        for (j=0; j<T; j++)
        {
            soma += m[i][j];
        }
        printf("\n");
    }

    for (i=0; i<T; i++)
    {
        somaDiagPrinc += m[i][i];
    }

    j = T - 1;
    for (i=0; i<T; i++)
    {
        somaDiagSec += m[i][j];
        j--;
    }

    printf("Soma dos elementos: %d\nSoma da diagonal principal: %d\nSoma da diagonal secundaria: %d", soma, somaDiagPrinc, somaDiagSec);

    return 0;
}
