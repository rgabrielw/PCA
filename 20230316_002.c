#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int **matriz;
	int i, j;
	
	matriz = (int **) malloc (2 * sizeof(int*));
	for(i=0; i<2; i++){
		*(matriz+i) = (int *) malloc (3 * sizeof(int));
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("digite o valor %dx%d: ", i, j);
			scanf("%d", (*(matriz+i)+j));
		}
	}
	
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("[%d]", *(*(matriz+i)+j));
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("[%d]", matriz[i][j]);
		}
	}
	for(i=0;i<2;i++){
		free(matriz+i);
	}
	free(matriz);
}
