#include <stdio.h>

int main ()
{
    int m[3][3], i, j, k, w, aux=0, var;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            while (aux == 0)
            {
                aux = 1;
                printf ("Digite a posicao %i %i: ", i, j);
                scanf ("%d", &var);

                for (k=0; k<3; k++)
                {
                    for (w=0; w<3; w++)
                    {
                        if (m[k][w] == var)
                        {
                            aux = 0;
                            printf ("\nNumero repetido!\n");
                        }
                    }
                }

                if (aux == 1)
                {
                    m[i][j] = var;
                }
            }
            aux = 0;
        }
    }

    for (i=0; i<3; i++)
    {
        printf ("\n");
        for (j=0; j<3; j++)
        {
            printf ("%d ", m[i][j]);
        }
    }

    return 0;
}
