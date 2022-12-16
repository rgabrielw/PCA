#include <stdio.h>

int main() 
{
    float C = 0;
    float F = 0;
    float resultado = 0;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f",& F);
    
    resultado = (C * 9/5) + 32;
    
    printf("A temperatura em fahrenheit será: %.1fF", resultado);
    
    return 0;
}
