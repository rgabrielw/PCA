#include <stdio.h>

int main() 
{
    int n1 = 0;
    int n2 = 0;
    int resultado = 0;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",& n1);
    printf("Digite o segundo numero: ");
    scanf("%d",& n2);
    
    resultado = n1 + n2;
    printf("A soma dos dois numeros eh: %d", resultado);
    
    return 0;
}
