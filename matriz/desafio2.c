#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int m[3][2], v[6], i ,j, k = 0;

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            m[i][j] = rand()%50;
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d \t\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            v[k] = m[i][j];
            k++;
        }
    }

    printf("\n");
    for (i=0; i<6; i++)
    {
        printf("%d\t", v[i]);
    }

    return 0;
}
