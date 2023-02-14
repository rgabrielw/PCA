#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int i, j;
	char word[50];
	
	printf("type your word: ");
	scanf("%s", word);
	
	for(i=0; i<strlen(word); i++){
		if(word[i] == ' '){
			printf(" ");
			i++;
		}
		if(word[i]!='x' && word[i]!='y' && word[i]!='z'){
			printf("%c", word[i]+3);	
		}else{
			printf("%c", word[i]-23);
		}
	}
	return 0;
}
