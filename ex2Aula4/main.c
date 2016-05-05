#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 10
/*Ex3) Escreva uma função "mm" que receba um vetor inteiro v[0..n-1]
e os endereços de duas variaveis inteiras, digamos mim e max,
e deposite nessas variaveis o valor de um elemento minimo e o
valor de um elemento maximo de vetor. Escreva também uma função
main que use a função1*/


void mm(int vet[], int *min, int *max){
  int i;
  min = 100000;
  max = 0;
  int menorNum;
  int maiorNum;


  for(i = 0; i < MAX; i ++){
    printf("\nPOSIÇÃO VETOR: %d", i);
    printf("\nVALOR VETOR: %d", &vet[i]);
    printf("\n#################################################");

    // ENCONTRAR MAIOR VALOR
    if(vet[i] > max){
        maiorNum = vet[i];

        printf("\nENCONTRADO UM MAIOR NUMERO, NA POSIÇÃO: %d", i);
        printf("\nVALOR ENCONTRADO: %d", vet[i]);

    }
    // ENCONTRAR MENOR VALOR
     else if(vet[i] < min){
        menorNum = vet[i];

        printf("\nENCONTRADO UM MENOR NUMERO, NA POSIÇÃO: %d", i);
        printf("\nVALOR ENCONTRADO: %d", vet[i]);
    }
  }
}

int main()
{
    int vetor[MAX];

    vetor[0,1,2,3,4,5,6,7,8,9];
    mm(vetor, MIN, MAX);

    return 0;
}
