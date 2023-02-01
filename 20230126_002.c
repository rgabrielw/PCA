#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int i, j;
int matriz1[2][2] = {{3,3}, {2,2}};
int matriz2[2][2] = {{2,2}, {3,3}};

void soma(){
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("[%d]", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n+\n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("[%d]", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n=\n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("[%d]", matriz1[i][j] + matriz2[i][j]);
		}
		printf("\n");
	}
	return;
}

int main(int argc, char *argv[]) {
	
	soma();
	
	return 0;
}


