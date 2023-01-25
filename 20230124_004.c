#include <stdio.h>
#include <stdlib.h>

int i = 0;
int tam;

void imprimir(){
	
	printf("digite a quantidade de valores: ");
	scanf("%d", &tam);
	
	while(tam<1 || tam>100){
		printf("\nnumero invalido! digite um numero entre 1 e 100: ");
		scanf("%d", &tam);
	}
	
	int num[tam];
	
	for(i=1; i<=tam; i++){
		printf("\ndigite os valores: ");
		scanf("%d", &num[i]);
		}
	for(i=1; i<=tam; i++){
		if(num[i] % 2 == 0){
			printf("\n%d", num[i]);
		}	
	}
		
	return;
}

int main(int argc, char *argv[]){
	
	imprimir();
	
	return 0;
}
