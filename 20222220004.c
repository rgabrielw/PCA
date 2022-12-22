#include <stdio.h>

int main() 
{
    int cont;
    int cont2;
    int menor;
    int maior;
    
    for (cont=0; cont<20; cont++){
        printf("\ndigite o numero:");
        scanf("%d",& cont2);
        
        if (cont2 > maior) 
        maior = cont2;
        if (cont2 < menor) 
        menor = cont2;
        
        
    }
    printf("o maior valor e o menor fornecido é:%d e %d", maior, menor);
    
return 0;
}