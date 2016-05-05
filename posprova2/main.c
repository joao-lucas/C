#include <stdio.h>
#include <stdlib.h>

/*seja o seguinye equencia de instruções em um programa C*/


int main()
{
    int c=0;
    int vet[5000];
    int vetCp[5000];
 while(c<5000){
    vet[c] = (rand() % 5000) + c;
    vet[c] = vetCp[c];
    printf("%d\n", vet[c]);
    c++;
 }

}
