#include <stdio.h>

int main() 
{
    float altura = 0;
    float peso_ideal = 0;
    
    printf("Insira a sua altura: ");
    scanf("%f",& altura);
    
    peso_ideal = (72.7*altura)-58;
    
    printf("O seu peso ideal �: %.2f kg", peso_ideal);
    
    return 0;
}
