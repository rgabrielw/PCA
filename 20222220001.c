#include <stdio.h>

int main() 
{
    int cont1;
    int cont2;
    int soma = 0;
    
    for (cont1=0; cont1<5; cont1++){
        printf("\nDigite um numero:");
        scanf("%d", & cont2);
        
        soma += cont2;
    }
    printf("a soma dos cinco numeros eh:%d", soma);
    
    return 0;
}