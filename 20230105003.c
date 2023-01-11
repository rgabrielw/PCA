#include <stdio.h>
#include <stdlib.h>

int dobro, cont, par, i, num;
int soma = 0;

int perfeito(){
	
	printf("%d", num);
	dobro=2*num;
	
	for(cont=1; cont<=num; cont++){
		if(num % cont == 0){
		soma=soma+cont;
		}
	}
		if(soma==dobro){
			printf("\n%d eh um numero perfeito", num);
			}else{
				printf("\n%d nao eh um numero perfeito", num);
	}
}

int main(){
	printf("digite um numero: ");
	scanf("%d", &num);
	
	if(num % 2 != 0){
		printf("\nnumero invalido digite outro numero: ");
		scanf("%d", &num);
	}
	perfeito();
	
return 0;
}
