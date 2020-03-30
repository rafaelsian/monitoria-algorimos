#include <stdio.h>

int main ()
{
    char string[3][50];
    int i;

    for (i=0; i<3; i++)
    {
        fflush(stdin);
        gets(string[i]);
    }

    for (i=0; i<3; i++)
    {
        printf("\n%s", string[i]);
    }


    return 0;
}
