#include <stdio.h>
#include <stdlib.h>

float peso, mes, semana;

float parto(){
	
	if(peso<100 || semana>=28){
		printf("Parto nao devera ser realizado, reavaliar clinicamente");
	}if(mes=semana/4){
		if((peso>2500 && mes>7)||((peso<=2000 || peso>=1500) && (mes>9))){
			printf("Parto normal");
		}
	if(peso>2500 && mes<=7){
			printf("Parto cesariana");
		}
	}else{
		printf("Parto cesariana");
	}
}

int main(){
	
	printf("\ndigite o peso do feto em gramas:");
	scanf("%f", &peso);
	
	printf("\ndigite a quantidade de semanas de gestacao: ");
	scanf("%f", &mes);
	
	parto();
	
	return 0;
}