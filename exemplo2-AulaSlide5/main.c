#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas{
    char nome[50];
    int idade;
};

int main()
{
    struct pessoas pessoa[2];
        strcpy(pessoa[0].nome, "Joao");
        pessoa[0].idade = 20;

        strcpy(pessoa[1].nome, "Lucas");
        pessoa[1].idade = 21;

    printf("\Nome: %s - Idade: %d", pessoa[0].nome, pessoa[0].idade);
    printf("\nNome: %s - Idade: %d", pessoa[1].nome, pessoa[1].idade);
    return 0;
}
