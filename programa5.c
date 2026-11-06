/******************************************************************************

Cortés Romero Alberto Emiliano
-condicional en tienda de electrodomesticos

*******************************************************************************/
#include <stdio.h>
#define descuento 0.08

int main()
{
    float precio, subtotal,total; 
    printf("Bienvenido, cuanto cuesta el producto elegido?\n");
    scanf("%f",&precio);
    
    if (precio > 2500)
    {
        printf("Se aplicara un descuento del 8%%.\n");
        
        subtotal = (precio * descuento);
        
        total = precio - subtotal;
        
        printf("El total a pagar es de $%.2f.", total);
    }else{
        
        printf("El total a pagar es de $%.2f", precio);

    }
    
    return 0;
}
