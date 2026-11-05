/******************************************************************************

Cortés Romero Alberto Emiliano

- Casa de cambio de dólares a pesos 
*******************************************************************************/
#include <stdio.h>
#define dolar 11.96
int main()
{
    float dol,pesos;
    
    printf("Bienvenido, ingrese la cantidad de dinero en dolares : \n");
    scanf("%f", &dol);
    
    pesos = dolar*dol;
    
    printf("%f dolares son %f pesos.\n", dol, pesos);

    return 0;
}
