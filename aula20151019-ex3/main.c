#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("/home/joao_lucas/Engenharia/AlgortmosEstrutDados/", "r");
    if(arquivo==0){
        printf("Erro na leitura do arquivo! \n");
    } else {
        printf("\nArquivo aberto com sucesso! \n");
    }
    fclose(arquivo);

    printf("Hello world!\n");
    return 0;
}
