#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int d, n, resto;
	int cont = 0;
	
	printf("\ndigite um numero inteiro entre 0 e 9: ");
	scanf("%d", &d);
	
	printf("\ndigite outro numero inteiro: ");
	scanf("%d", &n);
	
	while(n>0){
		resto = n % 10;
		n = n / 10;
		if(resto == d){
			cont++;
		}
	}
	printf("\no numero %d se repete %d vez(es)", d, cont);
	
	return 0;
}
