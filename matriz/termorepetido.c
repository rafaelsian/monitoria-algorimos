#include <stdio.h>
#define M 3
#define N 3

int main ()
{
    int m[M][N] = {0, 1, 3, 3, 4, 5, 6 ,7 ,3}, i, j, k, y;

    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            for (k=0; k<M; k++)
            {
                for (y=0; y<N; y++)
                {
                    if (m[i][j] == m[k][y] && i!=k && j!=y)
                    {
                        printf ("\nTermo repetido: %d", m[i][j]);
                    }
                }
            }
        }
    }
    return 0;
}
