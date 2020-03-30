#include <stdio.h>
#define n 4

int main()
{
    unsigned int v[n], i, aux1 = 0, aux2 = 1, num;
    printf("\nSequencia: 0 ");

    num = aux1+aux2;

    for(i=0; i<n; i++)
    {
        printf("%d ", num);
        num = aux1+aux2;
        aux1 = aux2;
        aux2 = num;
    }
}
