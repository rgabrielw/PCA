#include <stdio.h>
#include <stdlib.h>

int i, j, tam, pe;

void produto_escalar(){
	
	int numx[tam];
	int numy[tam];
		
	for(i=1; i<=tam; i++){
		printf("digite os valores de x: ");
		scanf("%d", &numx[i]);
		while(numx[i]<1){
			printf("numero invalido! digite apenas numeros maiores que 1: ");
			scanf("%d", &numx[i]);
		}
	}
	for(i=1; i<=tam; i++){
		printf("digite os valores de y: ");
		scanf("%d", &numy[i]);
		while(numy[i]<1){
			printf("numero invalido! digite apenas numeros maiores que 1: ");
			scanf("%d", &numy[i]);
		}
	}
	for(i=1; i<=tam; i++){
		pe += numx[i] * numy[i];
	} 
	printf("\no produto escalar dos dois vetores eh %d", pe);
	
	return;
}

int main(int argc, char *argv[]){
	
	printf("digite o tamanho dos vetores: ");
	scanf("%d", &tam);
	
	while(tam<1){
		printf("numero invalido! digite um numero positivo: ");
		scanf("%d", &tam);
	}		
	produto_escalar();
	
	return 0;
}
