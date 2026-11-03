/******************************************************************************

Cortés Romero Alberto Emiliano

-Suma , resta y multipicación de dos numeros dados

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1,n2,s,r,mt;
    printf("Ingrese dos números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    s= (n1 + n2);
    
    r = (n1 - n2);
    
    mt = (n1 * n2);
    
    printf("La suma de ambos numeros es: %.2f, la resta es: %.2f, y la multipicación de ambos numeros es: %.2f,",s ,r,mt);

    return 0;
}
