#include <stdio.h>

int main ()
{
    float temperaturaCelsius, temperaturaFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 9)/5 + 32; // F = c*9 / 5 + 32

    printf ("Temperatura em Fahrenheit: %f", temperaturaFahrenheit);

    return 0;
}
