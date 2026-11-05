/******************************************************************************

Cortés Romero Alberto Emiliano

- obtención del área y circunferencia de un círculo, a partir del un radio dado

*******************************************************************************/
#include <stdio.h>
#define pi 3.14

int main()
{
    float r, area, circunferencia;
    
    printf("Ingrese el valor del radio de un circulo : \n");
    scanf("%f", &r);
    
    area = (pi * r*r);
    
    circunferencia = ( 2 * pi * r);
    
    printf("El area del circulo es es de %.2f u^2, y la circunferencia es de %.2f", area, circunferencia);
    

    return 0;
}
