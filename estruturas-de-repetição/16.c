#include <stdio.h>

int main()
{
    srand(time(NULL));
    int i1 = 0, i2 = 9, i, v1[10], v2[10], v3[10];
    for(i=0; i<10; i++)
    {
        v1[i] = rand()%30;
        v2[i] = rand()%30;
    }

    for(i=0; i<10; i++)
    {
        printf("   %d %d   ",i1,i2);
        v3[i] = v1[i1] * v2[i2];
        i1++;
        i2--;
    }

    printf("\n\n");
    for(i=0; i<10; i++)
    {
        printf("%d  ",v1[i]);
    }

    printf("\n\n");
    for(i=0; i<10; i++)
    {
        printf("%d  ",v2[i]);
    }

    printf("\n\n");
    for(i=0; i<10; i++)
    {
        printf("%d  ",v3[i]);
    }
    return 0;
}
