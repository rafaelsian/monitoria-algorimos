#include <stdio.h>

int main()
{
    int i, j;

    i = j = 1;

    while (i<=10)
    {
        while (j<=10)
        {
            printf("%d x %d = %d\n", i, j, i*j);
            j++;
        }
        i++;
        j=1;
        printf("\n");
    }

    return 0;
}
