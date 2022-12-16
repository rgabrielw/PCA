#include <stdio.h>

int main() 
{
    float SH = 0;
    float horas = 0;
    float sal = 0;
    
    printf("Insira o quanto vc ganha por horas: ");
    scanf("%f",& SH);
    
    printf("Insira quantas horas vc trabalhou: ");
    scanf("%f",& horas);
    
    sal = SH * horas;
    printf("O seu salário será de: R$%.2f", sal);
    
    return 0;
}
