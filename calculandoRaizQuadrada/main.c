#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int seguir;
    float valor;

    do{
    printf("\nValor a ser calculado a raiz: \n");
    scanf("%1f", &valor);
    printf("A raiz de %6.2f = %6.2f\n", valor, sqrt(valor));
    printf("\nPara mais um valor digite 1, para sair 0:\n");
    scanf("%d", &seguir);
    } while(seguir);
    //system("pouse");
}
