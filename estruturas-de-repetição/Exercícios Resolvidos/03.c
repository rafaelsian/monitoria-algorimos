#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, num, numAux, primo;

    for (i=1; i<=30; i++)
    {
        num = rand();

        if (i <= 10)
        {
            if (num%2 == 0)
            {
                printf("\nO numero %d e par!", num);
            }
        }
        else if (i <= 20)
        {
            if (num%2 != 0)
            {
                printf("\nO numero %d e impar!", num);
            }
        }
        else
        {
            numAux = num;
            while(numAux > 0)
            {
                if(num%numAux == 0)
                {
                  primo++;
                }
                numAux--;
            }
            if (primo == 2)
            {
                printf("\nO numero %d e primo!", num);
            }
            primo = 0;
        }
    }
    return 0;
}
