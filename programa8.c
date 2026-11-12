/******************************************************************************

Cortés Romero Alberto Emiliano
determinar si un numero es divisor del otro

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("Ingrese dos numeros enteros (excepto cero) : \n");
    scanf("%i",&a);
    scanf("%i",&b);
    
    if (b%a ==0)
    {
        //a es divisor de b
        printf("%i es divisor de %i", a,b);
    }else if (a%b == 0){
        //b es divisor de a
        printf("%i es divisor de %i", b,a);
    }else{
        //a no es divisor de b y viceversa
        printf("%i no es divisor de %i ni %i es divisor de %i", b,a,a,b);
    }

    return 0;
}
