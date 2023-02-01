#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, j, x, n;

	int matriz [3][3];
	
	printf("digite o valor q vc quer encontrar: ");
	scanf("%d", &x);
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("digite o valor da posicao %d %d da matriz: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(x == matriz[i][j]){
				n++;
			}
		}
		printf("\n");
	}
	if(n != 0){
		printf("o numero %d aparece em: ", x);
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(x == matriz[i][j]){
					printf("%dx%d\n", i+1, j+1);
				}
			}
		}
	}else {
		printf("o numero %d nao aparece na matriz!", x);
	}
	return 0;
}
