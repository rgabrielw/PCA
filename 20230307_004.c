#include <stdio.h>

int main(){
	
	int v[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *pt;
	int i;

	pt = &v;

	for(i = 0; i < 8; i++){
		
		printf("V[%d] = %d\n", &v[i], *(pt + i)*2);
	}
	
	return 0;
}
