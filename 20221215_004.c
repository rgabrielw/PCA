#include <stdio.h>

int main() 
{
    float raio = 0;
    float resultado = 0;
    float pi = 3.14;
    
    printf("Digite o valor do raio: ");
    scanf("%f",& raio);
    
    resultado = pi * (raio*raio);
    
    printf("O valor da area do circulo eh: %.1f", resultado);
    
    return 0;
}
