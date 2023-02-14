#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, j, c, menor;
	char carro[5][50];
	int consumo[5];
	
	printf("--- CONSUMO DE CADA MODELO DE CARRO ---\n\n");
	for(i=0; i<5; i++){
		printf("digite o modelo do carro: ");
		scanf("%s", carro[i]);
		printf("digite o consumo do carro a cada KM: ");
		scanf("%d", &consumo[i]);
		
		if(i == 0){
			menor = consumo[i];
		}	
		if(consumo[i]<menor){
			menor = consumo[i];
			j = i;
		}	
	}
	printf("\n--- MODELO MAIS ECONOMICO ---\n\n%s\n", carro[j]);
	printf("\n--- CONSUMO A CADA 1000KM ---\n\n");
	for(i=0; i<5; i++){
		c = 1000 * consumo[i];
		printf("%s consume %d a cada 1000KM!\n\n", carro[i], c);
	}
	return 0;
}
