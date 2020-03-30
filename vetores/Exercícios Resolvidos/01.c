#include <stdio.h>
#define n 5

int main()
{
    int vet[n], i, m, cont = 0;
    for (i=0; i<n; i++)
    {
        printf ("Digite a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf ("Digite um numero para pesquisar: ");
    scanf("%d", &m);

    for (i=0; i<n; i++)
    {
        if (vet[i] == m)
        {
            cont++;
        }
    }

    printf ("\nO numero %d aparece %d vezes", m, cont);

    return 0;
}
