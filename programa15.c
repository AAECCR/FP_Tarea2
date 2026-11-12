/**************************

Cortés Romero Alberto Emiliano
- conteo de numeros positivos, negativos y nulos

***************************/
#include <stdio.h>

int main()
{
    int n,a,b=0, c = 0 , d = 0;
    printf("Ingrese la longitud del arreglo:\n");
    scanf("%i",&n);
    
    int arreglo1[n];
    
    
    for (int i=0 ; i<n ; i++)
    {
        printf("Ingrese el elemento %i del arreglo: \n", i+1);
        scanf("%i",&arreglo1[i]);
        if ( arreglo1[i] > 0) //comparacion , no asignacion
        {
            b++;
            
        } else if (arreglo1[i]< 0)
        
        {
            c++;
        }else
        
        {
            d++;
        }
        
    }
    
    printf("Los elementos positivos en el arreglo son %i, los negativos son %i y los nulos son %i", b,c,d);

    return 0;
}
