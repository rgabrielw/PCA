#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/* Fa�a um programa que leia as notas finais de v�rios alunos de uma turma e mostre a maior
	nota, a menor nota e a m�dia aritm�tica simples das notas da turma. O programa p�ra
	quando encontrar uma nota negativa.*/
	
	float media = 0, soma = 0, media_ari = 0;
	float maior, menor;
	int n = 0;
	
	while(media>=0){
		
		printf("digite a sua media: ");
		scanf("%f", &media);
		printf("para encerrar o programa digite um numero negativo!\n");
		
		soma += media;
		n++;
		
		if(media<0){
			n--;
			soma -= media;
			
		}
		if(n == 1){
			maior = media;
			menor = media;
		}else if(media>maior){
			maior = media;
		}else if(media<menor && media>=0){
			menor = media;
		}
	}
	media_ari = soma/n;
	
	printf("\nmaior media: %.2f\n", maior);
	printf("\nmenor media: %.2f\n", menor);
	printf("\nmedia aritmetica: %.2f", media_ari);
	
	return 0;
}
