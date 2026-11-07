/******************************************************************************

Cortés Romero Alberto Emiliano
-aumento salarial con condicional

*******************************************************************************/
#include <stdio.h>
#define aumento1 .15
#define aumento2 .12


int main()
{
    float salario,salarioT1,salarioT2;
printf("Ingrese el salario del trabajador\n");
scanf("%f",&salario);
 
 if (salario < 1000)
 {
     salarioT1 = salario * aumento1;
     salarioT2 = salario + salarioT1;
     
     printf("Se ha producido un aumento en el sueldo de este trabajador, correspondiente al 15%%, el nuevo salario es:  %f",salarioT2);
     
     
 }else {
     
     salarioT1 = salario * aumento2;
     salarioT2 = salario + salarioT1;
     
     printf("Se ha producido un aumento en el sueldo de este trabajador, correspondiente al 12%%, el nuevo salario es:  %f",salarioT2);
     
 }

    return 0;
}
