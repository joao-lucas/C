#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas {
    char nome[50];
    int idade;
};
void imprimePessoa(struct pessoas p1){
    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
}
void cadastraPessoa(struct pessoas p1){
    printf("\nDigite seu Nome: ");
    scanf("%s", p1.nome);
    printf("\nDigite sua Idade: ");
    scanf("%d", p1.idade);
}

int main()
{
    struct pessoas aluno1;
    cadastraPessoa(aluno1);
    system("clear");

    imprimePessoa(aluno1);g
    return 0;
}
