#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, j, soma_linha, soma_coluna;
	int matriz[5][5] = {{1,2,3,4,5}, {5,4,3,2,1}, {4,3,1,2,3}, {7,5,2,1,3}, {3,2,4,5,1}};
	
	printf("- diagonal principal\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i == j){
				printf("[%d]", matriz[i][j]);
			}
			if(i == 3){
				soma_linha += matriz[i][j];
			}
			if(j == 1){
				soma_coluna += matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("- diagonal secundaria\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i + j == 4){
				printf("[%d]", matriz[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	
	printf("- a soma da quarta linha eh %d\n\n", soma_linha);
	printf("- a soma da segunda coluna eh %d\n\n", soma_coluna);
	
	printf("- tudo menos a diagonal principal\n\n");
	for(i=0; i<5; i++){
		for(j=0;j<5; j++){
			if(i != j){
				printf("[%d]\n", matriz[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
