#include <stdio.h>

int main() 
{
    float SH, horas, salBruto, salLiquido = 0;
    
    printf("Insira o quanto vc ganha por hora: ");
    scanf("%f",& SH);
    
    printf("Insira o n�mero de horas que vc trabalhou no m�s: ");
    scanf("%f",& horas);
    
    salBruto = horas * SH;
    
    printf("\nO seu sal�rio bruto foi de: R$%.2f", salBruto);
    
    salLiquido = salBruto - (salBruto*0.11) - (salBruto*0.08) - (salBruto*0.05);
    
    printf("\nO seu sal�rio l�quido foi de: R$%.2f", salLiquido);
    
    return 0;
}
