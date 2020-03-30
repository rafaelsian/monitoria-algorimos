#include <stdio.h>

int main()
{
    srand(time(NULL));
    int v[10], i, maior;

    for(i=0; i<10; i++)
    {
        scanf("%d", &v[i]);
    }

    maior = v[i];

    for(i=0; i<9; i++)
    {
        if(maior < v[i+1])
            maior = v[i+1];
    }

    for(i=0; i<10; i++)
        printf("%d ",v[i]);

    printf("\n%d", maior);
    return 0;
}
