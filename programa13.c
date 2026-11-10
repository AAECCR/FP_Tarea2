/******************************************************************************

Cortés Romero Alberto Emiliano
- suma de los elementos de un arreglo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,b=0;
    
    printf("Que longitud (cantidad de elementos) tendra el arreglo unidimensional?\n");
    scanf("%i",&n);
    
    int arreglo [n];
    
    for (int i=0 ; i<n ; i++)
    {
        printf("Ingrese el valor del elemento %i: \n", i+1);
        scanf("%i",&arreglo[i]);
        
        b = b + arreglo[i];
    }
    printf("La suma de los elementos es del arreglo de longitud %i es de %i", n, b);

    return 0;
}
