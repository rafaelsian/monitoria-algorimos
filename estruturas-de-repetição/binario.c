#include <stdio.h>

int main()
{
    int numDec, numBin = 0, aux = 0, i, auxZero = 1;
    scanf("%d", &numDec);

    while (numDec != 0)
    {
        aux = (numDec%2) * auxZero;
        auxZero *= 10;
        numBin += aux;
        numDec /= 2;
    }

    printf ("%d", numBin);

    return 0;
}
