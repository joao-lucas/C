#include <stdio.h>
#include <stdlib.h>

/*Crie uma prorama que receba idade, nome, altura e peso, que imprima o nome do aluno mais velho mais alto
e digite 0 para sair*/

int main()
{
    int idade, escolha;
    float altura;
    int peso, maiorPeso;
    float maiorAltura=0;
    int maiorIdade = 0;
    char nome[30];
    char nomeAlunoMaisAlto;
    int i;

    //printf("\nDigite 0 para sair");
    //scanf("%d", &escolha);
    //while (escolha != 0){
    for(i=0;i<2;i++){
        printf("\nSeu Nome: ");
        scanf("%s", &nome);
        //nomeAlunoMaisAlto = nome;

        printf("\nIdade: ");
        scanf("%d", &idade);
        if(idade > maiorIdade){
            maiorIdade = idade;
        }

        printf("\nAltura: ");
        scanf("%f", &altura);
        if(altura > maiorAltura){
            maiorAltura = altura;
            nomeAlunoMaisAlto = nome;
        }

        printf("\nPeso: ");
        scanf("%d", &peso);
        if(peso > maiorPeso){
            maiorPeso = peso;
        }
        //system("clear");

    } //while(escolha != 0);


    printf("\nMaior idade: %d", maiorIdade);
    printf("\nMaior altura: %1.2f ", maiorAltura);
    printf("\nMaior peso: %d", maiorPeso);
    printf("\nNome do aluno mais velho: %s", nomeAlunoMaisAlto);

    return 0;
}
