#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	int i, j, a;
	int n = 1;
	char nome[5][4][20];
	char achar[20];
	for(i = 0; i < 5 ; i+=1){
		for(j = 0; j < 4 ; j+=1){
			printf("Defina o %d aluno da equipe %d: ", j+1, i+1);
			scanf(" %[^\n]", nome[i][j]);			
		}
	}
	while (n == 1){
		printf("qual aluno quer achar?\n");
		scanf(" %[^\n]", achar);
		for(i = 0; i < 5 ; i+=1){
			for(j = 0; j < 4 ; j+=1){
				if (strcmp(achar , nome[i][j]) == 0){
					printf("o aluno %s pertence a equipe %d:\n", achar, i+1);
					a = i;
					n = 0;
				}
			}
		}
		if (n == 0){
			for(j = 0; j < 4 ; j+=1){
				printf("%s\n", nome[a][j]);
			}
		}else{
			printf("nome nao consta na lista de alunos.\nverifique e tente novamente.\n\n");
		}
	}
	return 0;	
}
