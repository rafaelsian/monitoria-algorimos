#include <stdio.h>
#include <time.h>
#define T 6

int main()
{
    srand(time(NULL));
    int m[T][T], i, j;

    for (i=0; i<T; i++)
    {
        for (j=0; j<T; j++)
        {
            m[i][j] = rand();
        }
    }

    for (i=0; i<T; i++)
    {
        for (j=0; j<T; j++)
        {
            printf("\t\t%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
