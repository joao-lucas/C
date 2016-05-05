#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    char descricao[40];
    float valor;
};

void recebe_produto(struct prod[]){
    int i;
    for(i=0;i<5;i++){
        printf("\nInsira o nome do Produto: \n");
        scanf(" %s", &prod[i].descricao);
        printf("\nInsira o valor do Produto (%s): ", prod[i].descricao);
        scanf("%f", &prod[i].valor);
    }

}
void mostra_produto(struct prod[]){
    int i;
    for(i=5-1;i>=0;i--){
        printf("\nDescrição: %s - Valor: R$ %f\n", prod[i].descricao, prod[i].valor);
    }
}


int main()
{
    //struct produto prod[5];
    recebe_produto(prod[5]);

    mostra_produto(prod[5]);

    //printf("Hello world!\n");
    return 0;
}
