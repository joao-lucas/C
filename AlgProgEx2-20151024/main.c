//obs:  Não esta mostrando o IMC corretamente

#include <stdio.h>
#include <stdlib.h>

/*2) Desenvolva um programa em c que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
 Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF e imprimir o seu IMC.*/

struct pessoas {
    char nome[50];
    float altura;
    float peso;
    int cpf;
    char sexo;
    float IMC;
};

void cadastrarPessoas(struct pessoas p[]){
    int i;
    for(i=0;i<1;i++){
        printf("\nPessoa Numero [%d]", i);
        printf("\nDigite o Nome: ");
        scanf("%s", &p[i].nome);
        printf("\nDigite a Altura: ");
        scanf("%f", &p[i].altura);
        printf("\nDigite o Peso: ");
        scanf("%f", &p[i].peso);
        //printf("\nDigite o CPF: ");
        //scanf("%d", &p[i].cpf);
        printf("\nSexo: M - Masculino ~  F - Feminino: ");
        scanf("%s", &p[i].sexo);
        if(p[i].sexo == 'm' || p[i].sexo == 'M') {
            p[i].sexo = "Homem";
        } else {
            p[i].sexo = "Mulher";
        }
        system("clear");
    }
}

void calcularIMC(struct pessoas p[]){
    int i;
    for(i=0;i<1;i++){
        printf("\nPessoa Numero: [%d]", i);
        p[i].IMC = (p[i].peso / (p[i].altura * p[i].altura));

    if (p[i].IMC < 26){
        printf("\nIndice de Massa Corporea: %f - \nEstado: Normal!\n", p[i].IMC);
    } else if (p[i].IMC >= 26 && p[i].IMC < 30){
        printf("\nIndice de Massa Corporea: %f - \nEstado: Obeso!\n", p[i].IMC);
    } else if (p[i].IMC >= 30 && p[i].IMC < 80) {
        printf("\nIndice de Massa Corporea: %f - \nEstado: Obesidade Morbida!\n", p[i].IMC);
    } else {
        printf("\nPeso Desconhecido!");
        system("pause");
        }
    }
}

int main()
{
    struct pessoas pessoa[1];
    cadastrarPessoas(pessoa);
    printf("\nCalculando Indice de Massa Corporea ...\n");
    calcularIMC(pessoa);

    return 0;
}
