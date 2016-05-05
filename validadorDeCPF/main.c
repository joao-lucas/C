#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define tamanhoCPF 11

int tranformarCharEmInt(char charConverter){
    return (int)charConverter - 48;
}

void verificarCPF(char cpf[tamanhoCPF]){
    printf("Entre com CPF: ");
    scanf("%s", &cpf);

    if(tranformarCharEmInt(cpf[0]) == 1 && cpf[1] == NULL){
            printf("\nSaindo!\n");
            exit(0);
    }

validarCPF(cpf);

}

static int obterDigito(int numero){
    int resto = (numero%11);
    if(resto < 2){
        return 0;
    }
    int digito =  (11 - resto);
    return digito;
}


int obterPrimeiroDigito(char cpf[tamanhoCPF]){
    int somaNumeros = somarDigitos(cpf, 9, 10);
    int primeiroDigito = obterDigito(somaNumeros);
    return primeiroDigito;
}
int obterSegundoDigito(char cpf[tamanhoCPF]){
    int somaNumeros = somarDigitos(cpf, 10, 11);
    int segundoDigito = obterDigito(somaNumeros);
    return segundoDigito;
}


int validarCPF(char cpf[tamanhoCPF]){
    int i;
    for(i = 0; i < tamanhoCPF; i ++){
            if(cpf[i] == NULL){
                printf("\nCPF INVALIDO!\n");
            }
    }
    int primeiroDigito = obterPrimeiroDigito(cpf);

}

 int somarDigitos(char cpf[tamanhoCPF], int qtdDigitosSomar, int multiplicador){
    int somaDigitos = 0;
    int i = 0;
    int somatoria = 0;
    for(i; i < qtdDigitosSomar; i++ ) {
        int digito = tranformarCharEmInt(cpf[i]);
        somatoria += (digito * multiplicador--);

    }
    void checarCPF(char cpf[tamanhoCPF]){
        printf("\nEntre com um CPF: ");
        scanf("%s", &cpf);

    }
   void menu(){
        int i;
        printf("\nDigite 1 para checar mais CPFs ou 0 para sair: ");
        scanf("%d", i);
        if(i==1){
            checarCPF(cpf[tamanhoCPF]);
        } else if(i == 0) {
            printf("\nSaindo...\n");
            exit(0);
        } else {
            printf("\nOpçãp Invalida!\n");
            menu();
        }
        validarCPF(cpf);

    }
}

void main()
{
    char cpf[tamanhoCPF];
    printf("\n Validador de CPF\n");
    printf("\nEntre com um cpf para ser checado: ");
    scanf("%s", &cpf);
    validarCPF(cpf);
        //system("PAUSE");

    //return 0;
}
