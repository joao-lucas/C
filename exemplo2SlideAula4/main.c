#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetorTeste[3] = {4, 7, 1};
    int *ponteiro = vetorTeste;
    printf("%p\n", vetorTeste);
    printf("%p\n", ponteiro);
    printf("%p\n", &ponteiro);

    for(i = 0;i < 3; i ++){
        printf("\nO valor do endereco no indice %d do vetor é %p\n", i, &ponteiro[i]);
        printf("\nO valor do indice %d do vetor é %d\n", i, ponteiro[i]);
    }
    return 0;
}
