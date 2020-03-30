#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j, k, w, tam1, tam2, tamIn, auxTam;
    char palavra1[50], palavra2[50];

    printf ("\nDigite a palavra 01: ");
    fflush (stdin);
    gets(palavra1);
    printf ("\nDigite a palavra 02: ");
    fflush (stdin);
    gets(palavra2);

    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);
    tamIn = tam1 + tam2;
    auxTam = tam1 - tam2;

    char palavraIntercalada[tamIn + 1];

    for (i = 0; i < tamIn; i++)
    {
        palavraIntercalada[i] = '-';
    }

    if (auxTam < 0)
    {
        for (i = tamIn - 1, k = 0, j = tam2 - 1; k < auxTam * (-1); i--, k++, j--)
        {
            palavraIntercalada[i] = palavra2[j];
        }

        for (i = 0, j = 0; i < strlen(palavraIntercalada) - auxTam * (-1); i++)
        {
            if (i % 2 == 0)
            {
                palavraIntercalada[i] = palavra1[j];
            }
            else
            {
                palavraIntercalada[i] = palavra2[j];
                j++;
            }
        }
    }
    else
    {
        for (i = tamIn - 1, k = 0, j = tam1 - 1; k < auxTam; i--, k++, j--)
        {
            palavraIntercalada[i] = palavra1[j];
        }

        for (i = 0, j = 0; i < strlen(palavraIntercalada) - auxTam; i++)
        {
            if (i % 2 == 0)
            {
                palavraIntercalada[i] = palavra1[j];
            }
            else
            {
                palavraIntercalada[i] = palavra2[j];
                j++;
            }
        }
    }

    printf ("\nnome: %s\ntam: %d\n", palavraIntercalada, strlen(palavraIntercalada));

    return 0;
}
