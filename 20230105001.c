#include <stdio.h>
#include <stdlib.h>

int x, y, j, i, k, meno, dif, per;

int scanIntIntervalo (int j){
	while(j<0 || j>1000){
		printf("digite outro numero valido\n");
		scanf("%d", &j);
	}
	return j;
}

void percentual (){
	per=100*meno/(x+y);
	printf("o percentual eh de %d\n", per);
}

void absdif(){
	dif=x-y;
	if(dif<0){
		dif=dif*(-1);
	}	
	printf("a diferenca absoluta entre os dois numeros eh: %d\n", dif);
}

int menor(){
	if(x>y){
		return y;
	}
	return x;
}

int main (){
	printf("\ndigite um numero:");
	scanf("%d", &x);
	i=scanIntIntervalo(x);
	printf("digite outro numero: ");
	scanf("%d", &y);
	k=scanIntIntervalo(y);
	
	meno = menor();
	
	percentual();
	
	absdif();
	
	return 0;
}