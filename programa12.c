/******************************************************************************

Cortés Romero Alberto Emiliano
Calculo de el producto de los primeros numeros N naturales

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N,a;
    printf("Ingrese una cantidad N para calcular el producto de los primeros N numeros naturales: \n");
    scanf("%i",&N);
    a=1;

    for (int i=1; i<=N ; i++)
    {
        a = a * i;
    }
    
    printf("El producto de los primeros %i numeros naturales es %i", N, a);

    return 0;
}
