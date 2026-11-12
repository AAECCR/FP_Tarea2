/**************************

Cortés Romero Alberto Emiliano
- impresion de los primeros 100 elementos pares de un arreglo

***************************/
#include <stdio.h>

int main()
{
    int n,a = 0;
    printf("Ingrese la longitud del arreglo (debe ser mayor o igual a 100):\n");
    scanf("%i",&n);
    
    int arreglo1[n];
    
    
    for (int i=0 ; i<n ; i++)
    {
        printf("Ingrese el elemento %i del arreglo: \n", i+1);
        
         scanf("%i",&arreglo1[i]);
         
        
    }
    
    for (int i = 0 ; i<n && a < 100 ; i++)
    {
        if (( arreglo1[i]%2 == 0))
        {
            if (a > 0)
            {
                printf(" ,");
            }
            printf("%i", arreglo1[i]);
            a++;
        }
        
    }

    return 0;
}
