#include <stdio.h>

int main(){
	
	int i = 10;
	float j = 1.56;
	char k = 'G'; 
	
	printf("antes do ponteiro\n");
	printf("%d\n", i);
	printf("%.2f\n", j);
	printf("%c\n", k);
	
	int *pont1 = &i;
	*pont1 = 5;
	float *pont2 = &j;
	*pont2 = 1.34;
	char *pont3 = &k;
	*pont3 = 'M';
	
	printf("depois do ponteiro\n");\
	printf("%d\n", i);
	printf("%.2f\n", j);
	printf("%c\n", k);
  	
	return 0;
}
