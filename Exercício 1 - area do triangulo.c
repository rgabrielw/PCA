#include <stdio.h>
int main() 
{
float base, altura, area;
printf("Insira o valor da base: ");
scanf("%f", & base);
printf("Insira o valor da altura: ");
scanf("%f", & altura);
area = altura * base /2;
printf("O valor da area do triangulo sera:%.2f", area);
}
