#include <stdio.h>

int main ()
{
    int hora, minuto;

    printf ("Digite a hora e minuto (formato hh:mm, inclusive com os dois pontos): ");
    scanf("%d:%d", &hora, &minuto);

    if(minuto == 60)
    {
        hora++;
        minuto = 0;
    }

    if(hora > 12)
    {
        hora = hora - 12;
        printf ("Horario: %d:%d pm", hora, minuto);
    }
    else
    {
        printf ("Horario: %d:%d am", hora, minuto);
    }

    return 0;
}
