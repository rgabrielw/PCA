#include <stdio.h>
#include <stdlib.h>


int num, i, fatr=1;

int fat(){
	printf("\ndigite um numero: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
	fatr = fatr * i; 
	}
	printf("o fatorial de %d eh %d", num, fatr);
}
int main(){
	fat();
	return 0;
}