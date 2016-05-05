#include <stdio.h>
#include <stdlib.h>

struct celula{
    int conteudo;
    struct cel *prox;
};
// IMPRIME UMA LISTA ENCADEADA COM CABEÇA
void imprime(celula *ini){
    cel *p;
    for(p=ini->prox; p != NULL){
        printf("%d", p->conteudo);
    }
}
// INSERSAO EM UMA LISTA
void insere(int x, celula *p){
    celula *nova;
    nova=malloc(sizeof(celula));
    nova->conteudo=x;
    nova->prox=p->prox;
    p->prox=nova;
}
// REMOÇÃO DE UMA LISTA
void remove(celula *p){
    celula *morta;
    morta=p->prox;
    p->prox=morta->prox;
    free(morta);
}
// IMPRIME UMA LISTA ENCADEADA SEM VABEÇA
void imprime(celula *ini){
    celula *p;
    for(p=ini;p!=NULL;p->prox){
        printf("%d", p->conteudo);
    }
}
// BUSCA EM UMA LISTA ENCADEADA
celula *busca(int x, celula *ini){
    celula *p;
    p=ini->prox;
    while(p!=NULL && p->conteudo!=x){
        p=p->prox;
    return p;
    }
}
//VERSAO RECURSIVA DA MESMA FUNÇÃO
celula *buscaR(int x, celula *ini){
    if(ini->prox==NULL){
        return NULL;
    } else if(ini->prox->conteudo==x){
        return ini->prox
    } else {
        return buscaR(x,ini->prox);
    }
}

int main()
{
    typedef struct cel celula;
    //celula.prox = NULL;

    imprime(celula);
    printf("%d", celula);
    return 0;
}
