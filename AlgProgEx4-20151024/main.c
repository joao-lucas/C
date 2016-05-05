#include <stdio.h>
#include <stdlib.h>

/*4) Escrever um programa em c que cadastre vários produtos.
Em seguida, imprima uma lista com o código e nome da cada produto.
 Por último, consulte o preço de um produto através de seu código.*/

struct produtos {
    char nome[50];
    float preco;
    int codigo;

};

void cadastrarProdutos(struct produtos p[]){
    int i;
    for(i=0;i<3;i++){
        p[i].codigo = i;
        printf("\nNome do Produto: ");
        scanf("%s", &p[i].nome);
        printf("\nValor do Produto: ");
        scanf("%f", &p[i].preco);
        system("clear");

    }
}
void listarProdutos(struct produtos p[]){
        int i;
        for(i=0;i<3;i++){
        printf("\nProduto %s \nCodigo: %d   \nValor: %.2f\n\n", p[i].nome, i, p[i].preco);
        printf("___________________________________________________");
        }
}
void consultarPeloCodigodoProduto(struct produtos p[]){
    int cod;
    printf("\nBuscar pelo Codigo: ");
    scanf("%d", &cod);
    int i;
    for(i=0;i<3;i++){
        if (p[i].codigo == cod){
            printf("\nProduto: %s", p[i].nome);
            printf("\nPreço: %.2f", p[i].preco);
        }
    }
}

int main()
{
    struct produtos prod[3];
    cadastrarProdutos(prod);
    listarProdutos(prod);
    consultarPeloCodigodoProduto(prod);
    return 0;
}
