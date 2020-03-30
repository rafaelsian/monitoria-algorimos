#include <stdio.h>

int main()
{
    int num = 1, numAux, cont, fat = 1, M;

    printf ("Digite um intervalo M: ");
    scanf("%d", &M);

    while (M > 0)
    {
        cont = 0;
        numAux = num;
        while (numAux > 0)
        {
            if(num%numAux == 0)
            {
                cont++;
            }
            numAux--;
        }
        if (cont == 2)
        {
            printf ("\nNumero %d e primo!", num);
        }
        num++;
        M--;
    }
    return 0;
}
