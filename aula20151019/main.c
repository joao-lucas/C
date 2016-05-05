#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
};
void imprime_pessoa(struct pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %i\n", p.idade);
}

int main()
{
    struct pessoa aluno1;
    strcpy(aluno1.nome, "Joao");
    aluno1.idade = 25;
    imprime_pessoa(aluno1);

    //printf("Hello world!\n");
    return 0;
}
