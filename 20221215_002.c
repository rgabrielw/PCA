#include <stdio.h>

int main() 
{
    float n1, n2, n3, n4 = 0;
    float resultado = 0;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f",& n1);
    
    printf("Digite a sua segunda nota: ");
    scanf("%f", & n2);
    
    printf("Digite a sua terceira nota: ");
    scanf("%f", & n3);
    
    printf("Digite a sua quarta nota: ");
    scanf("%f", & n4);
    
    resultado = (n1+n2+n3+n4)/4;
    printf("A sua media anual é: %.2f", resultado);
    
    return 0;
}
