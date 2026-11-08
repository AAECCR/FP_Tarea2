/******************************************************************************

Cortés Romero Alberto Emiliano
-suma de numeros pares en un rango definido [10,50]

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i;
    a = 0;
    for (i=10; i<=50 ; i++)
    {
    
        if ( i%2 == 0)
        {
            a = i+ a;
        }else{
            printf("Numero no par\n");
        }
    }
    printf("La suma de los numeros pares del 10 al 50 es %i\n", a);

    return 0;
}
