#include <stdio.h>

int main()
{
    unsigned int n, aux = 1, cont = 0;
    printf("Digite um numero: ");
    scanf("%d",&n);

    while (aux == 1)
    {
        n = n/10;
        cont++;

        if(n == 0)
        {
            aux = 0;
        }
    }

    printf("O numero possui %d algarismos", cont);
    return 0;
}
