#include <stdio.h>
#include <stdlib.h>

// EXEMPLO VARIAVEL LOCAL 1
void exemploVarLocal1(){
    printf("\nPrograma que Soma 2 valores / Exemplo1\n");

    // VARIAVEIS LOCAIS
    int varLocalNum1, varLocalNum2 = 0;

    printf("\nEntre com primeiro valor: ");
    scanf("%d", &varLocalNum1);
    printf("\nEntre com o segundo valor: ");
    scanf("%d", &varLocalNum2);

    printf("\nResultado da Soma: %d\n", varLocalNum1 + varLocalNum2 );
}

// EXEMPLO VARIAVEL LOCAL 2
void exemploVarLocal2(){
    printf("\nPrograma que Subtrai 2 valores / Exemplo2\n");

    // VARIAVEIS LOCAIS
    int varLocalNum1, varLocalNum2 = 0;

    printf("\nEntre com primeiro valor: ");
    scanf("%d", &varLocalNum1);
    printf("\nEntre com o segundo valor: ");
    scanf("%d", &varLocalNum2);

    printf("\nResultado da Subtração: %d\n", varLocalNum1 - varLocalNum2 );
}

// EXEMPLO VARIAVEL LOCAL 3
void exemploVarLocal3(){
    printf("\nPrograma que Multiplica 2 valores / Exemplo3\n");

    // VARIAVEIS LOCAIS
    int varLocalNum1, varLocalNum2 = 0;

    printf("\nEntre com primeiro valor: ");
    scanf("%d", &varLocalNum1);
    printf("\nEntre com o segundo valor: ");
    scanf("%d", &varLocalNum2);

    printf("\nResultado da Multiplicação: %d\n", varLocalNum1 * varLocalNum2 );

}

// EXEMPLO VARIAVEL LOCAL 4
void exemploVarLocal4(){
    printf("\nPrograma que Divide 2 valores / Exemplo4\n");

   // VARIAVEIS LOCAIS
    int varLocalNum1, varLocalNum2 = 0;

    printf("\nEntre com primeiro valor: ");
    scanf("%d", &varLocalNum1);
    printf("\nEntre com o segundo valor: ");
    scanf("%d", &varLocalNum2);

    printf("\nResultado da Divisão: %d\n", varLocalNum1 / varLocalNum2 );
}

// EXEMPLO VARIAVEL LOCAL 5
void exemploVarLocal5(){
    printf("\nPrograma que imprime meu nome / Exemplo 5\n");

    // VARIAVEL LOCAL
    char nome = 'JoaoLucas';
    printf("\nNome: %c", &nome);
}

void main()
{
    // somar
    exemploVarLocal1();
    // subtrair
    exemploVarLocal2();
    // multiplicar
    exemploVarLocal3();
    // dividir
    exemploVarLocal4();
    // imprime meu nome
    exemploVarLocal5();
}
