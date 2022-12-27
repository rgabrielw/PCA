#include <stdio.h>

int main (){
	float cont, num, maior, menor;
	float soma = 0;
	
	for(cont=0; cont<3; cont++){
		printf("informe a sua nota: ");
		scanf("%f", &num);
		soma += num;
		
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
	printf("a maior nota foi %.1f e a menor nota foi %.1f", maior, menor);
	printf("\na maior e a menor media eh igual a %.2f", soma/3);
	return 0;
}
