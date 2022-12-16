#include <stdio.h>
int main() 
{
float sal, calculo, resultado;
printf("Insira seu salário:");
scanf("%f",&sal);
calculo = 0.1*sal;
resultado = sal + calculo;
printf("Seu novo sera de: %1.2f", resultado);
}
