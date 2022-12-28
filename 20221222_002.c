#include <stdio.h>

int main() 
{
    int cont, num, maior, menor;
    
    for (cont=0; cont<15; cont++){
        printf("\ndigite o numero: ");
        scanf("%d",& num);
        
		if (cont == 0){
        	maior = num;
        	menor = num;
		}
        	if (num > maior){
        		maior = num;
		} 
        
        	if (num < menor){
        		menor = num;
		} 
        
        
        
    }
    printf("o maior valor eh %d e o menor eh %d", maior, menor);
    
return 0;
}
