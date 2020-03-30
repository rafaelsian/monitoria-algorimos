#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    float distanciaX, distanciaY, distanciaTotal;

    printf ("Informe as coordenadas X1 e Y1: ");
    scanf("%f", &x1);
    scanf("%f", &y1);

    printf ("Informe as coordenadas X2 e Y2: ");
    scanf("%f", &x2);
    scanf("%f", &y2);

    distanciaX = pow(x2-x1, 2.0);
    distanciaY = pow(y2-y1, 2.0);
    distanciaTotal = pow (distanciaX+distanciaY, 0.5);

    printf ("\nDistancia entre os pontos (%f, %f) a (%f, %f) é: %f", x2,y2,x1,y1,distanciaTotal);

    return 0;
}
