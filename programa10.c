/******************************************************************************

Cortés Romero Alberto Emiliano

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a ,m,n,o;
    m=0;
    n=0;
    o=0;
    for (int i=0 ; i<10; i++)
    {
        
        printf("Ingrese el numero %i, este proceso se repetira 100 veces!\n",i+1);
        scanf("%i",&a);
        
        if (a > 0)
        {
            //positivo
            m++;
        }else if (a < 0){
            
            // negativo
            n++;
        }else{
            
            // el numero es nulo, (cero)
            o++;
        }
    }
    
    printf("En total hubieron %i numeros positivos, %i numeros negativos y %i numeros nulos\n", m , n , o);

    return 0;
}
