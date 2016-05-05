#include <stdio.h>
#include <stdlib.h>
/*Considerando o registro de um produto de uma loja contendo as seguintes
informações: descrições, valor
Fazer um programa que, dado o registro de 50 produtos, exiba-os na oredem
inversa em que foram digitados.*/
struct produtoLoja{
    char descricao[50];
    float valor;
    int ID;
};

void receberProdutos(struct produtoLoja p[]){
    int i = 0;
    do {
        p[i].ID = i+1;
        printf("\nID: %d", i);
        printf("\nInsira a descrição do Produto: \n");
        scanf("%s", &p[i].descricao);
        printf("\nValor do Produto: ");
        scanf("%f", &p[i].valor);
        system("clear");
    i++;
    } while(i<3);
}
void exibirProdutos(struct produtoLoja p[]){
    int i;
    for(i=0;i<3;i++){
        printf("\nID: ", p[i].ID);
        printf("\nDescrição: %s", p[i].descricao);
        printf("\nValor: %.2f", p[i].valor);
    }
}

void exibirdeOrdemInversa(struct produtoLoja p[]){
    int i=0;
    for(i=3-1;i>=0;i--){
        printf("\nID: ", p[i].ID);
        printf("\nProduto: %s", p[i].descricao);
        printf("\nValor: %.2f\n\n", p[i].valor);
        printf("___________________");
    }
}

int main()
{
    struct produtoLoja produto[3];
    receberProdutos(produto);
    exibirProdutos(produto);
    exibirdeOrdemInversa(produto);
    return 0;
}
