#include <stdio.h>
int main() 
{
float comanda, garcon, resultado;
printf("Insira o total da comanda:");
scanf("%f",& comanda);
printf("insira o valor da porcentagem do garcon:");
scanf("%f", & garcon);
resultado = comanda * garcon/100;
printf("O valor da gorjeta será:%1.2f", resultado);
}
