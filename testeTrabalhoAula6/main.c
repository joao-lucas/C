#include <stdio.h>
#include <stdlib.h>

struct no{ // definição da lista
	int descricao[50]; //descricao
	struct no* proximo; //ponteiro para uma proxima posiçao da estrutura
};

struct descriptor { //definição do descriptor
	int qtd; // armazena a quantidade de nós da lista
	no* n; // ponteiro para a lista
}
//descriptor Lista; // criando uma lista do tipo descriptor


//Criando um nó na lista
no* criarNo(int n){
	no* p = (no*) malloc(sizeof(struct no));
	p->info=n;
	p->proximo=NULL;
	return p;
};

//Inserindo um elemento no inicio da lista
void insereElementonoInicio(no* Lista, int numero){
	no* p = criarNo(numero);
	if(!vazia(*Lista)){
		p->proximo = Lista->L;
	}
	Lista->L = p;
	Lisa->quantidade++;
}

//Inserindo elemento no final da lista
void insereElementonoFinal(no* Lista, int numero){
	no* p = no(numero);
	if(!vazia(*Lista)){
		p->prox = Lista->L;
	}
	Lista->L=p;
	Lista->quantidade++;
}

//Removendo um elemento no final da lista
Boolean removeElementonoInicio(no* Lista, int* numero){
	no* q;

	if(vazia(*Lista)){
		return false;
	} else {
		q = *Lista.L;
		*numero=q->info;
		if(*Lista.L->proximo == NULL){
			*Lista.L=NULL;
		} else {
			*Lista.L = q->proximo;
		}
		free(q);
		Lista->quantidade--;
		return true;
	}

}



int main()
{
    printf("Hello world!\n");
    return 0;
}
