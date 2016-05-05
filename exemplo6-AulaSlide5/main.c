#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia os dados do seguinte
arquivo, onde a primeira linha contem o nome, se segunda
o sobrenome, a terceira o ano de nascimento  e a quarta
o peso(dados veridicos!)*/
int main()
{
    int i;
    float f;
    char nome[20];
    char sobreNome[20];

    FILE *arquivo;
    arquivo =  fopen("/home/joao_lucas/algoritimo/outputs/exemplo6.txt","r");
    rewind(arquivo);

    //printf("\nPrimeiro Nome: ");
    fscanf(arquivo, "%s", nome);
    //printf("\nSobrenome: ");
    fscanf(arquivo, "s", sobreNome);
    fscanf(arquivo, "%i", &i);
    fscanf(arquivo, "%f", &f);

    printf("\n %i \n%f \n%s", i, f, nome, sobreNome);

    fclose(arquivo);
    return 0;
}
