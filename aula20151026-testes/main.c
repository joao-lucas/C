#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int conteudo;
    struct celula *prox;
}celula;
/*
void menu(){
    int escolha;
    printf("\n1 - Inserir   \n2 - Exibir   \n3 - Remover \n0 - Sair\n");
    printf("\nEscolha uma opção:  ");
    scanf("%d", &escolha);

    if(escolha==1){
        printf("\nInsira o valor da celula: ");
        scanf("");
        insere();
    } else if (escolha==2){
        exibir();
    } else if (escolha==3) {
        remove();
    } else if (escolha==0){
        system("exit");
    } else {
        printf("\nOpção Invalida, saindo... ");
        system("exit")
    }

}
*/
void remove(celula *p) {
    celula *morta;
    morta=p->prox;
    p->prox = morta->prox;
    free(morta);
}

void insere(int x, celula *p){
    celula *nova;
    nova=malloc(sizeof(celula));
    nova->conteudo = x;
    nova->prox = p->prox;
    p->prox = nova;
}

celula *busca(int x, celula *ini){
    celula *p;
    p=ini->prox;
    while(p != NULL && p->conteudo != x){
        p = p->prox;

        return p;
    }
}

void exibir(celula *ini){
    celula *p;
    for(p=ini->prox;p!=NULL;p=p->prox){
        printf("%d", p->conteudo);

    }
}

int main()
{
    int op, valor;
    celula p;
    p.prox = NULL;

    insere(op,&p);

    return 0;
}
