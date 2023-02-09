#include <stdio.h>
#include <string.h>

void AoContrario(char palavra[20]){
	int i;
	printf("--- PALAVRA AO CONTRARIO ---\n\t");
	for(i=strlen(palavra)-1; i>=0; i--){
		printf("%c", palavra[i]);
	}
	printf("\n\n");
}

void Vogal(char palavra[20]){
	int i;
	printf("--- PALAVRA SEM VOGAIS ---\n\t");
	for(i=0; i<=strlen(palavra)-1; i++){
		if(palavra[i]!='a' && palavra[i]!='A' && palavra[i]!='e' && palavra[i]!='E' && palavra[i]!='i' && palavra[i]!='I' && palavra[i]!='o' 
		&& palavra[i]!='O' && palavra[i]!='u' && palavra[i]!='U'){
			printf("%c", palavra[i]);
		}
	}
	printf("\n\n");
}
void maiusculo(char palavra[20]){
	int i;
	int toupper(palavra);
	printf("--- PALAVRA COM LETRA MAIUSCULA ---\n\t");
	for(i=0; i<=strlen(palavra)-1; i++){
		palavra[i] = toupper(palavra[i]);
		printf("%c", palavra[i]);
	}
}
void NumC(char palavra[20]){
	int i;
	int n = 0;
	char c;
	printf("\n\n");
	printf("--- CARACTERE ---\n\n");
	printf("digite o caractere: ");
	scanf(" %c", &c);
	
	for(i=0; i<=strlen(palavra)-1; i++){
		if(palavra[i]==c){
			n++;
		}
	}
	printf("a letra %c aparece %d vezes", c, n);
}
void apagar(char palavra[20]){
	int i;
	char c;
	
	printf("\n\ndigite o caractere para apagar: ");
	scanf(" %c", &c);
	printf("--- CARACTERE APAGADO ---\n\t");
	
	for(i=0; i<=strlen(palavra)-1; i++){
		if(palavra[i]!=c){
			printf("%c", palavra[i]);
		}
	}
}

int main(){
	
	char palavra[20];
	
	printf("insira uma palavra: ");
	scanf("%s", &palavra);
	printf("\n");
	
	AoContrario(palavra);
	Vogal(palavra);
	maiusculo(palavra);
	NumC(palavra);
	apagar(palavra);
	
	return 0;
}

