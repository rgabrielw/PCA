#include <stdio.h>

void funcao(int mat1[3][3], int mat2[3][3], int mat3[3][3]){
	int M1L=3, M1C=3, M2L=3, M2C=3;
  	int linha, coluna, i, somaproduto;
	for(linha=0; linha<M1L; linha++){
    		for(coluna=0; coluna<M2C; coluna++){
      			somaproduto=0;
      			for(i=0; i<M1L; i++) somaproduto+=mat1[linha][i]*mat2[i][coluna];
      				mat3[linha][coluna] = somaproduto;
		}
    	}
}
int main(int argc, char *argv[]){ 

  	int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  	int mat2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
  	int mat3[3][3];
  	int M1L=3, M1C=3, M2L=3, M2C=3;
  	int linha, coluna, i, somaproduto;
  	
  	if(M1C != M2L){
  		printf("------------------\n");
  		printf("NAO EH POSSIVEL MULTIPLICAR AS MATRIZES!");
		}
	funcao(mat1,mat2,mat3);
	
	for(linha=0; linha<M1L; linha++){
    		for(coluna=0; coluna<M2C; coluna++)
    			printf("%d", mat3[linha][coluna]);
		printf("\n");	  
	}
  return 0;
}
