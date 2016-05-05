#include <stdio.h>
#include <stdlib.h>

void main()
{

    FILE *arquivo;
    arquivo = fopen("/home/joao_lucas/algoritimo/outputs/aula5.txt","r");
    if (arquivo==0){
        printf("Erro na leitura do arquivi!\n");
    } else {
    printf("Arquivo aberto com sucesso!\n");
    }
    fclose(arquivo);
}
