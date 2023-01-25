#include <stdio.h>
#include <stdlib.h>

int i = 0;
int fatr = 1;
int tam, j;

void imprimir_fat(){
	
	printf("digite a quantidade de numeros: ");
	scanf("%d", &tam);
	
	while(tam<1 || tam>100){
		printf("numero invalido! digite um numero entre 1 e 100: ");
		scanf("%d", &tam);
	}
	
	int num[tam];
	
	for(i=1; i<=tam; i++){
		
		printf("digite os valores: ");
		scanf("%d", &num[i]);
		
		for(j=num[i]-1; j>=1; j--){
			num[i] *= j;
		}
	}
	for(i=1; i<=tam; i++){
		printf("\n%d", num[i]);
	}
	return;
}

int main(int argc, char *argv[]){
	
	imprimir_fat();
	
	return 0;
}
