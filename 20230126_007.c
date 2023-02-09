#include <stdio.h>

int itin[50];
int i = 0;
int k, a;
int m[4][4] = {{31,15,16,22}, {14,25,12,19}, {24,20,14,17}, {15,34,14,25}};

void lis(int itin[50]) {
    int custo = 0;

    for(k = 0; k < i - 1; k++) {
        custo += m[itin[k]][itin[k+1]];
    }
    printf("\nCusto do Trajeto = %d\n", custo);
    
}

int main(int argc, char const *argv[])
{
    
    printf(" --- CIDADES ---\n");
    printf("0-Paris;\n1-Frankfurt;\n2-Barcelona;\n3-Lisboa;\n");

    printf("Em qual cidade voce esta?: ");
    scanf("%d", &itin[0]);
    
    while (itin[0] < 0 || itin[0] > 3) {
        printf("INVALIDO!\n");
        printf("Em qual cidade voce esta?: ");
        scanf("%d", &itin[0]);
    }
    
    while (itin[i] != 4) {
        i++;
        printf("Cidade de destino: ");
        scanf("%d", &itin[i]);
        
        while (itin[i] < 0 || itin[i] > 4) {
            printf("INVALIDO!\n");
            printf("Cidade de destino: ");
            scanf("%d", &itin[i]);
        }
        
        printf("Digite 4 para finalizar;\n");
    }
    
    printf("\n---\n");
    printf("\nitinerario = ");
    for (a = 0; a < i; a++) {
        printf("%d\t", itin[a]);
    }
    
    lis(itin);

    return 0;
}
