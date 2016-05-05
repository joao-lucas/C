#include <stdio.h>
#include <stdlib.h>

int soma(valor1, valor2);
int dobro(valor1, valor2);

main(){
    int valor1, valor2, escolha;
    //int valor1, valor2, escolha;
    double resultSoma, resultDobro;
    printf("\nEntre com o primeiro valor: ");
    scanf("%d", &valor1);
    printf("\nEntre com o segundo valor: ");
    scanf("%d", &valor2);
    printf("\nDigite 1 para somar e 2 para multiplicar: \n");
    scanf("%d", &escolha);

    if(escolha == 1){
            int resultSoma = soma(valor1, valor2);
            printf("Resultado da soma: %d\n", resultSoma);
            system("PAUSE");
    } else if(escolha == 2){
            int resultDobro = dobro(valor1, valor2);
            printf("Resultado do dobro: %d\n", resultDobro);
            system("PAUSE");
    } else {
        printf("OPÇÃO INVALIDA");
    }
}
int soma(int v1, int v2){
    return v1 + v2;
}
int dobro(int v1, int v2){
    return (v1+v2);
}

