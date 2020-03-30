#include <stdio.h>
#define M 3
#define N 3

int main ()
{
    int v[] = {1, 2, 3, 2, 5, 3, 1}, i, j, aux;

    for (i=0; i<7; i++)
    {
        for (j=0; j<7; j++)
        {
            if (v[j] > v[j+1])
            {
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

    for (i=0; i<7; i++)
    {
        printf (" %d", v[i]);
    }
    return 0;
}
