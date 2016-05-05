#include <stdio.h>
#include <stdlib.h>

// VARIAVEIS GLOBAIS
float varivelGlobal1 = 0;
float varivelGlobal2 = 0;
float varivelGlobal3 = 0;
//string meuNome = 'JoaoLucas';

// EXEMPLO VARIAVEIS GLOBAIS 1
void exemploVarGlobal1(){
    printf("\nEXEMPLO 1: Programa que Soma 2 valores e subtrai com um, usando variaveis Globais \n");

    // recebe os 3 valores e atribui as variaveis globais
    printf("\nEntre com o primeiro valor: ");
    scanf("%f", &varivelGlobal1);
    printf("\nEntre com o segundo valor: ");
    scanf("%f", &varivelGlobal2);
    printf("\nEntre com o terceiro valor: ");
    scanf("%f", &varivelGlobal3);

    printf("\nSoma dos 3 valores: %6.2f", varivelGlobal1 + varivelGlobal2 + varivelGlobal3);
}

// EXEMPLO VARIAVEIS GLOBAIS 2
void exemploVarGlobal2(){
    printf("\nEXEMPLO 2: Programa que Soma 2 valores, e divide por um numero");

    // recebe os 2 valores para somar e 1 para dividir com o resultado da soma
    printf("\nEntre com o primeiro valor a ser somado: ");
    scanf("%f", &varivelGlobal1);
    printf("\nEntre com o segundo valor a ser somado: ");
    scanf("%f", &varivelGlobal2);
    printf("\nEntre com o valor a subtrair com a soma: ");
    scanf("%f", &varivelGlobal3);

    printf("\nSomando primeiro valor com segundo e subtraindo com o terceiro");
    printf("\nResultado: %6.2f", (varivelGlobal1 + varivelGlobal2) - varivelGlobal3);
}

// EXEMPLO VARIAVEIS GLOBAIS 3
void exemploVarGlobal3(){
    printf("\nEXEMPLO 3: Programa que subtrai 3 valores");

    // recebe os 3 valores a serem subtraidos
    printf("\nEntre com o primeiro valor: ");
    scanf("%f", &varivelGlobal1);
    printf("\nEntre com o segundo valor: ");
    scanf("%f", &varivelGlobal2);
    printf("\nEntre com o terceiro valor: ");
    scanf("%f", &varivelGlobal3);

    printf("\nResultado da Subtração: %6.2f", varivelGlobal1 - varivelGlobal2 - varivelGlobal3);
}

// EXEMPLO VARIAVEIS GLOBAIS 4
void exemploVarGlobal4(){
    printf("\nEXEMPLO 4: Programa que multiplica 3 valores");

    // recebe os 3 valores a serem multiplicados
    printf("\nEntre com o primeiro valor a ser multiplicado: ");
    scanf("%f", &varivelGlobal1);
    printf("\nEntre com o segundo valor a ser multiplicado: ");
    scanf("%f", &varivelGlobal2);
    printf("\nEntre com o terceiro valor a ser multiplicado: ");
    scanf("%f", &varivelGlobal3);

    printf("\nResultado da multiplicação: %6.2f", varivelGlobal1 * varivelGlobal2 * varivelGlobal3);

}

// EXEMPLO VARIAVEIS GLOBAIS 5
void exemploVarGlobal5(){
    printf("\nEXEMPLO 5: Programa que multiplica 2 valores e divide por um terceiro valor");

    // recebe os 2 valores a serem multiplicados e 1 para dividir com o resultado da soma
    printf("\nEntre com o primeiro valor a ser multiplicado: ");
    scanf("%f", &varivelGlobal1);
    printf("\nEntre com o segundo valor a ser multiplicado: ");
    scanf("%f", &varivelGlobal2);
    printf("\nEntre com o valor a subtrair os resultado da multiplicação: ");
    scanf("%f", &varivelGlobal3);

    printf("\nResultado: %5.2f", (varivelGlobal1 * varivelGlobal2) / varivelGlobal3);
}
int main()
{

    // soma 3 valores
    exemploVarGlobal1();
    // soma 2 valores e subtrai com um valor
    exemploVarGlobal2();
    // subrai 3 valores
    exemploVarGlobal3();
    // multiplica tres valores
    exemploVarGlobal4();
    // multiplica 2 valores e divide por 1
    exemploVarGlobal5();

}
