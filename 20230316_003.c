#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j;
	int l, c;
	double **matriz1, **matriz2;
	
	printf("\nqual o numero de linhas?: ");
	scanf("%d", &l);
	printf("\nqual o numero de colunas?: ");
	scanf("%d", &c);
	
	matriz1 = (double**) malloc (l * sizeof(double*));
	for(i=0;i<l;i++)
		*(matriz1+i) = (double *) malloc (c * sizeof(double));
	
	matriz2 = (double**) malloc (l * sizeof(double*));
	for(i=0;i<l;i++)
		*(matriz2+i) = (double *) malloc (c * sizeof(double));
	printf("\n ---PRIMEIRA MATRIZ--- \n\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("valor em %dx%d: ", i, j);
			scanf("%lf", (*(matriz1+i)+j));
		}
	}
	printf("\n ---SEGUNDA MATRIZ--- \n\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("valor em %dx%d: ", i, j);
			scanf("%lf", (*(matriz2+i)+j));
		}
	}
	
	for(i=0; i<l; i++){
		printf("\n");
		for(j=0; j<c; j++){
			printf("[%.1f]", (*(*(matriz1+i)+j)+*(*(matriz2+i)+j)));
		}
	}
	
}
