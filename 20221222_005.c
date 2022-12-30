#include <stdio.h>

int main (){
	int i = -1;
	float resultado, num;
	
	for (i=1; i<50; i++){
		num = num + 2;
		resultado = resultado + (num/i);
	}
	printf("a soma dos valores eh: %.2f", resultado);
	return 0;
}

