#include <stdio.h>

int main()
{
    int i, v[10], menor;

    for (i=0; i<10; i++)
    {
        scanf("%d",&v[i]);
        if (v[i]<v[i-1])
            menor = v[i];
    }

    printf("Menor: %d",menor);

    return 0;
}
