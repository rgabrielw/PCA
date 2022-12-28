#include <stdio.h>
int main(){
	int num, i;
	int primo=0;
	scanf("%d",&num);

	if (((num%2==0)||(num%3==0)||(num%5==0)||(num%7==0)) && (num!=2) && (num!=3) && (num!=5) && (num!=7)){
		printf("\nnao eh primo");
	}else{printf("\neh primo");
	}
	
	return 0;
}
