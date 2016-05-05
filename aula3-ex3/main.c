#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int main()
{
    int i;
    int vetor[10];

    gerarAleatorios(vetor);

    for(i; i < 10; i++){
        printf("Vetor: %d\n", vetor[i]);
    }

    return 0;
}
