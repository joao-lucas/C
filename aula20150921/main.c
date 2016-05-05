#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetorTeste[5]={4,7,1,2,3};
    int *ptr = vetorTeste;

    printf("%p\n", vetorTeste);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    for(i=0; i<5; i++){
        printf("\nO endreco de indice %d do vetor é %p\n", i, &ptr[i]);
        printf("\nO endereco do indece %d do vetor é %d\n", i, ptr[i]);
    }
}
