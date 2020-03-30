#include <stdio.h>
#define n 5

int main()
{
    int vet[n], i, cresc = 1;

    for (i=0; i<n; i++)
    {
        printf ("Digite a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (i=0; i<n-1; i++)
    {
        if (vet[i] > vet[i+1])
        {
            cresc = 0;
        }
    }

    if (cresc == 0)
    {
        printf ("O vetor nao esta ordenado!");
    }
    else
    {
        printf ("O vetor esta ordenado!");
    }

    return 0;
}
