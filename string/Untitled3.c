#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char string[10], i=0, letra;

    gets(string);
    scanf("%c", &letra);

    for(i=0; i<strlen(string); i++)
    {
        if(string[i] == letra)
        {
            printf("posicao %d", i);
        }
    }

    return 0;
}
