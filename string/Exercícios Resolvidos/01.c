#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100], letra;
    int i;

    printf ("Digite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    printf ("Digite a letra para retirar da palavra: ");
    scanf ("%c", &letra);

    for (i=0; i<strlen(palavra); i++)
    {
        if (palavra[i] != letra)
        {
            printf ("%c", palavra[i]);
        }
    }

    return 0;
}
