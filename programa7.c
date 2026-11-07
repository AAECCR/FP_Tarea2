/******************************************************************************

Cortés Romero Alberto Emiliano
- precio de ticket a partir de entrada y condicionales

*******************************************************************************/
#include <stdio.h>
#define descuento .30
#define preciokm .23

int main()
{
    float distancia_ida, distancia,descuento2,precio,precioT;
    int estancia;
    
    printf("Ingrese la distancia de ida en km\n");
    scanf("%f", &distancia_ida);
    
    distancia = 2* distancia_ida;
    
    printf("Ingrese la estancia en dias\n");
    scanf("%i", &estancia);
    
    if ((distancia>800) && (estancia > 7))
    {
        printf("Se aplicará un descuento de 30%%\n");
        
        precio = distancia * preciokm;
        
        descuento2 = precio * descuento;
        
        precioT = precio - descuento2;
        
        printf("El precio ahora es de $%.2f",precioT);
        
    }else {
        printf("No se aplicara descuento, el precio es normal\n");
        precio = distancia * preciokm;
        printf("$%.2f",precio);
    }

    return 0;
}
