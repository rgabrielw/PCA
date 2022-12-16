#include <stdio.h>

int main() 
{
    float num = 0;
    float resultado = 0;
    printf("Digite o valor em metros: ");
    scanf("%f",& num);
    
    resultado = num * 100;
    
    printf("O valor em cm eh: %.1f", resultado);
    
    return 0;
}
