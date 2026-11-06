/******************************************************************************

Cortés Romero Alberto Emiliano
-inversion mensual

*******************************************************************************/
#include <stdio.h>
#define t 0.17
int main()
{
    float dinero, monto, inversion;
    printf("Ingrese el monto a invertir, la tasa es del 17%% mensual.\n");
    scanf("%f",&dinero);
    
    inversion = dinero * t;
    
    monto = dinero + inversion;
    
    printf("El monto obtenido al finalizar el mes es de $.2%f", monto);

    return 0;
}
