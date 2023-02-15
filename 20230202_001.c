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
			printf("diga o %d aluno da equipe %d: ", j+1, i+1);
			scanf(" %[^\n]", nome[i][j]);			
		}
	}
	while (n == 1){
		printf("Digite o nome do aluno para achar?: ");
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
			printf("Esse nome não está na lista!\n");
		}
	}
	return 0;	
}
