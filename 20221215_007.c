#include <stdio.h>

int main() 
{
    float F = 0;
    float celsius = 0;
    
    printf("Insira o valor em Farenheit: ");
    scanf("%f",& F);
    
    celsius = (5 *(F-32)/9);
    printf("O valor em celsius �: %.1f�C", celsius);
    
    return 0;
}
