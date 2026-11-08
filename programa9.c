/******************************************************************************

Cortés Romero Alberto Emiliano
-impresion de tablas de multiplicar 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,n; //una variable extra
    printf("Ingrese un numero entero para saber su tabla de multiplicar\n");
    scanf("%i",&a);
    
    for (int i = 1; i<11;i++)
    {
        n = a*i; // no se actualiza el valor de a
        printf("%i*%i = %i \n" , a , i , n);
    }

    return 0;
}
