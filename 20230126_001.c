#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int matriz1 [3][5] = {{3,6,9,12,15}, {15,12,9,6,3}, {9,9,9,9,9}};
	int matriz2 [3][5] = {{15,12,9,6,3}, {3,6,9,12,15}, {9,9,9,9,9}};
	
	int i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("[%d]", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n+\n\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("[%d]", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n=\n\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("[%d]", matriz1[i][j] + matriz2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
