#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define VERSAO 1.0
#define TAMANHO_CPF 11
#define FATOR 11
#define ESTAGIO_1 9
#define POSICAO_PRIMEIRO_VERIFICADOR 9
#define ESTAGIO_2 10
#define POSICAO_SEGUNDO_VERIFICADOR 10

static int MULTIPLICADOR_PRIMEIRO_DIGITO = 10;
static int MULTIPLICADOR_SEGUNDO_DIGITO = 11;

static int charToInt(char paraConverter){
    return (int)paraConverter - 48;
}

static int somarDigitos(char cpf[TAMANHO_CPF], int estagio){
    int digitos_somar = estagio == 1? ESTAGIO_1: ESTAGIO_2;
    int multiplicador = estagio == 1? MULTIPLICADOR_PRIMEIRO_DIGITO: MULTIPLICADOR_SEGUNDO_DIGITO;
    int somatoria = 0;
    int i = 0;
    for(i; i < digitos_somar ; i++){
        int digito = charToInt(cpf[i]);
        somatoria += (digito * multiplicador--);
    }
    return somatoria;
}
static int obterDigito(int numero){
    int resto = (numero%FATOR);
    if(resto < 2){
        return 0;
    }
    int digito =  (FATOR - resto);
    return digito;
}
static int obterPrimeiroDigito(char cpf[TAMANHO_CPF]){
    int somatoria = somarDigitos(cpf,1);
    int primeiroDigito = obterDigito(somatoria);
    return primeiroDigito;
}
static int obterSegundoDigito(char cpf[TAMANHO_CPF]){
    int somatoria = somarDigitos(cpf,2);
    int segundoDigito =  obterDigito(somatoria);
    return segundoDigito;
}
static void validarCpf(char cpf[TAMANHO_CPF]){
    int i= 0;
    for(i; i< TAMANHO_CPF; i++){
        if(cpf[i] == NULL){
            printf("CPF INCOMPLETO!!");
        }
    }
    int primeiroDigito = obterPrimeiroDigito(cpf);

    if(charToInt(cpf[POSICAO_PRIMEIRO_VERIFICADOR]) != primeiroDigito){
        printf("PRIMEIRO DIGITO INFORMADO: %c\nPRIMEIRO DIGITO CALCULADO: %d\n",cpf[POSICAO_PRIMEIRO_VERIFICADOR], primeiroDigito);
        printf("CPF INVÁLIDO!\n");
        return;
    }

    int segundoDigito = obterSegundoDigito(cpf);
    if(charToInt(cpf[POSICAO_SEGUNDO_VERIFICADOR]) != segundoDigito){
        printf("SEGUNDO DIGITO INFORMADO: %c\nSEGUNDO DIGITO CALCULADO: %d\n",cpf[POSICAO_SEGUNDO_VERIFICADOR], segundoDigito);
        printf("CPF INVÁLIDO!\n");
        return;
    }
    printf("CPF INFORMADO É VALIDO.\n");
}

void checarCpf(char cpf[TAMANHO_CPF]){
    printf("Digite um CPF ou 1 para sair: ");
    scanf("%s", cpf);
    if((charToInt(cpf[0]) == 1 && cpf[1] == NULL)){
        printf("SAINDO!");
        exit(0);
    }
    validarCpf(cpf);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("Validador CPF Versão: %.2f\n", VERSAO);
    char cpf[TAMANHO_CPF];

    while(1){
        checarCpf(&cpf);
        system("PAUSE");
        //system("clear");
    }

    return 0;
}
