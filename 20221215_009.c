#include <stdio.h>

int main() 
{
    int a, b = 0;
    float c, resultado1, resultado2, resultado3 = 0;
     
    printf("Insira o primeiro n�mero: ");
    scanf("%d",& a);
    
    printf("Insira o segundo n�mero: ");
    scanf("%d",& b);
    
    printf("Insira o terceiro n�mero: ");
    scanf("%f",& c);
    
    resultado1 = (a*2)*(b/2);
    resultado2 = (a*3)+c;
    resultado3 = (c*c*c);
    
    printf("\n%.1f" "\n%.1f" "\n%.1f", resultado1, resultado2, resultado3);
    
    return 0;
}
