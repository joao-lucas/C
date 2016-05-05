#include <stdio.h>
#include <stdlib.h>

/*VERIFICADOR DE PAR OU IMPAR*/
int verifica(int num){
    if(num%2==0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int numero;
    int resultado;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    resultado = verifica(numero);
    if(resultado == 1){
        printf("\nO numero que você digitou é par!\n");
    } else {
        printf("\nO numero que você digitou é impar!\n");
    }
    return 0;
}
