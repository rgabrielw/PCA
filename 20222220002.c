#include <stdio.h>

int main() 
{
    int cont;
    int cont2;
    int soma = 0;
    
    for (cont=0; cont<50; cont++){
        printf("\ndigite o numero:");
        scanf("%d",& cont2);
        if (cont2 % 2 != 0)
            soma += cont2;
        
    }
    printf("a soma dos impares será: %d", soma);
    
    return 0;
}