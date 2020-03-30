#include <stdio.h>

int main()
{
    int n=1000, s1, s2;

    for (n=1000; n<=9999; n++)
    {
        s1 = n/100;
        s2 = n - s1*100;

        if (((s1+s2)*(s1+s2)) == n)
            printf("%d  ",n);
    }

    return 0;
}
