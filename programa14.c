/******************************************************************************

Cortés Romero Alberto Emiliano
- busqueda y contabilizacion de un mumero en un arreglo unidimensional

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a,b=0;
    printf("Ingrese la longitud del arreglo:\n");
    scanf("%i",&n);
    
    int arreglo1[n];
    
    printf("Ingrese un numero entero que se buscara en el arreglo: \n");
    scanf("%i",&a);
    for (int i=0 ; i<n ; i++)
    {
        printf("Ingrese el elemento %i del arreglo: \n", i+1);
        scanf("%i",&arreglo1[i]);
        if (arreglo1[i] == a) //comparacion , no asignacion
        {
            b++;
            
        }
        
    }
    
    printf("El numero ingresado %i se encuentra %i veces en el arreglo\n", a,b);

    return 0;
}
