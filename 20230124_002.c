#include <stdio.h>
#include <stdlib.h>
int i = 0;
int tam;

void imprimir_inverso(){
	
	printf("digite a quantidade de numeros: ");
	scanf("%d", &tam);
	
	while(tam<1 || tam>100){
		printf("numero invalido! - Digite um numero entre 1 e 100: ");
		scanf("%d", &tam);
	}
	
	int num[tam];
	
	for(i=1; i<=tam; i++){
		printf("\ndigite os valores: ");
		scanf("%d", &num[i]);
	}
	for(i=tam; i>0; i--){
		printf("%d\n", num[i]);
	}
	return;
}

int main(int argc, char *argv[]) {
	
	imprimir_inverso();
	
	return 0;
}
