#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct funcionario{
    char nome[50];
    int idade;
    float salario;
};

int main()
{
    struct funcionario func1;
    strcpy(func1.nome, "Joao");
    func1.idade = 20;
    func1.salario = 12000;

    printf("\Nome: %s", func1.nome);
    printf("\nIdade: %d",func1.idade);
    printf("\nSalarario: %.2f", func1.salario);
    return 0;
}
