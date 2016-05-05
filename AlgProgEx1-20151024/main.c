#include <stdio.h>
#include <stdlib.h>

/*1) Desenvolva um programa em c que cadastre o nome, a matrícula e duas notas de vários alunos.
Em seguida imprima a matrícula, o nome e a média de cada um deles.
*/

struct pessoas{
    char nome[50];
    int idade;
    int notaB1;
    int notaB2;
    int media;
};

void cadastrarAlunos(struct pessoas alunos[]){
    int i;
    for(i=0;i<3;i++){
        system("clear");
        printf("\nDigite o nome do Aluno[%d]: ", i+1);
        scanf("%s", &alunos[i].nome);
        printf("\nDigite a Idade do Aluno: ");
        scanf("%d", &alunos[i].idade);
        printf("\nNota Primeiro Bimestre: ");
        scanf("%d", &alunos[i].notaB1);
        printf("\nNota Segundo Bimestre: ");
        scanf("%d", &alunos[i].notaB2);

    }
}

void exibirNotasAlunos(struct pessoas alunos[]){
    int i;
    for(i=0;i<3;i++){
        printf("\nMatricula Aluno: [%d] \nNome: %s", i, alunos[i].nome);
        alunos[i].media = (alunos[i].notaB1 + alunos[i].notaB2);
        printf("\nMedia: %d", alunos[i].media);
        printf("\n");
    }
}

int main()
{
    struct pessoas alunos[3];
    cadastrarAlunos(alunos);
    exibirNotasAlunos(alunos);

    return 0;
}
