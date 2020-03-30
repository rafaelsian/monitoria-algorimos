#include <stdio.h>
#include <string.h>


int main ()
{
    char n[6];
    int dv = 0, i;

    gets(n);

    for (i=0; i<4; i++)
    {
        dv += n[i] * i+1;
    }

    dv %= 10;

    n[4] = '3';

    printf("%d",dv);
    printf("%s",n);
    return 0;
}
