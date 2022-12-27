#include <stdio.h>

int main(){
	int soma1, soma2 = 0;
	int num;
	
	while (num < 1000){
		printf("digite um numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0){
			soma1 += num;
		}
		if (num % 2 != 0){
			soma2 += num;
		}
	}
	printf("\na soma dos numeros impares foi de %d", soma2);
	printf("\na soma dos numeros pares foi de %d", soma1);
	
	return 0;
}
