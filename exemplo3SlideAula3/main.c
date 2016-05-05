#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[]="Joao Lucas";
    char aluno[50];
    strcpy(aluno, nome);

    printf("O nome do aluno eh %s", aluno);
    //printf("%s contem %d carecteres", nome, strlen(nome));
    return 0;
}
