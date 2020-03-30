#include <stdio.h>

int main()
{
    int matriz[3][3] = {0,1,2,3,4,5,6,7,8}, i, j, soma=0;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (i==j)
            {
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma: %d", soma);


    return 0;
}
