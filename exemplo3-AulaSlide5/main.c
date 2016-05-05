#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas{
    char nome[50];
    int idade;
};

void imprimePessoa(struct pessoas pessoa){
    printf("\nNome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
}

int main()
{
    struct pessoas aluno1;
    strcpy(aluno1.nome, "Joao");
    aluno1.idade = 20;
    imprimePessoa(aluno1);
    return 0;
}
