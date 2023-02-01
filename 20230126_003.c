#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num, i, j;
	int matriz[3][3];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("digite o valor da posicao %d %d da matriz: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	printf("\ninsira o valor q vc quer multiplicar a matriz:");
	scanf("%d", &num);
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d]", matriz[i][j] * num);
		}
		printf("\n");
	}
	
	return 0;
}

