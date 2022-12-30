#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float massa_inicial, massa_final;
	int temp, hr, min, sec;
	printf("digite a massa inicial: ");
	
	scanf("%f", &massa_inicial);
	
	temp = 0;
	massa_final = massa_inicial;
	
	while (massa_final >= 0.5){
		
		massa_final = massa_final/2;
		temp = temp + 50;
		
	}
	hr = temp / 3600;
	min = (temp % 3600) / 60;
	sec = (temp % 3600) % 60;
	 
	printf("\na massa inicial eh: %.1f", massa_inicial);
	printf("\ne a massa final foi de: %.1f", massa_final);
	printf("\no tempo total foi de %d horas, %d min e %d segundos.", hr, min, sec);
		
	return 0;
}



