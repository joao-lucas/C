#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100];
    int i, j, t, min, tamanho;

    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\nInsira os valores do vetor: ");


    for(i=0;i<=tamanho;i++){
        scanf("%d", &v[i]);
    }
    for(i=1;i<=tamanho;i++){
        min = i;
        for(j = i+1;j<=tamanho;j++){
            if(v[min]>v[j]){
                min =j;
            }
        }
        if(v[min] != i){
            t=v[i];
            v[i]=v[min];
            v[min]=t;
        }
    }
    printf("\nVetor Ordenado: \n");
    for(i=1;i<=tamanho;i++){
        printf("%d\n", v[i]);
    }

    return 0;
}
