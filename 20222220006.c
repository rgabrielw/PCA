#include <stdio.h>

int main(){
    int i, j, num1;
    for (i = 1; i <= 9; i ++){
        printf("\na tabuada do eh %d\n", i);
        for (j = 0; j <= 10; j ++){
            printf("%d X %d eh igual a %d \n", i, j, i*j);
        }
    }
    return 0;
}
