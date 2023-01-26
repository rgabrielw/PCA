#include <stdio.h>
#include <stdlib.h>

int giro, i, valor, rod;
int um, dois, tres, quatro, cinco, seis = 0;

void vetor(){
	
	for(i=1; i<=giro; i++){
		printf("digite qual o valor do dado: ");
		scanf("%d", &valor);
		while(valor<1 || valor>6){
			printf("numero invalido! digite numeros entre 1 e 6: ");
			scanf("%d", &valor);
		}
	int rod[giro];
	rod[i] = valor;
	
	if(rod[i]==1){
		um++;
	}
	if(rod[i]==2){
		dois++;
	}
	if(rod[i]==3){
		tres++;
	}
	if(rod[i]==4){
		quatro++;
	}
	if(rod[i]==5){
		cinco++;
	}
	if(rod[i]==6){
		seis++;
	}
	}
	printf("\no 1 aparece %d vez(es)\n", um);
	printf("o 2 aparece %d vez(es)\n", dois);
	printf("o 3 aparece %d vez(es)\n", tres);
	printf("o 4 aparece %d vez(es)\n", quatro);
	printf("o 5 aparece %d vez(es)\n", cinco);
	printf("o 6 aparece %d vez(es)\n", seis);
	
	return;
}

int main(int argc, char *argv[]){
	
	printf("diga quantas vezes o dado girara: ");
	scanf("%d", &giro);
	
	vetor();
	
	return 0;
}
