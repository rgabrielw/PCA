#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int soma=0;
	int dobro, num, cont;

	scanf("%d",&num);

	dobro=2*num;

	for (cont=1;cont<=num;cont++){  

 		if(num % cont == 0){
    	soma=soma+cont;
	}
}
 		if(soma==dobro){
 			printf("\n%d eh um numero perfeito ",num);
		}
 		else
		{
 			printf ("\n%d nao eh um numero perfeito",num);
		}	
	return 0;
}
