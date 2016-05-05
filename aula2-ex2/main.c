#include <stdio.h>
#include <stdlib.h>

int gerarVetorAleatorio(int a, int b);
void imprimeVetor(int vetor[]);
int tamanhoVetor;

main()
{
    int x, y;
    printf("Entre com o tamanho do vetor a ser gerado: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    //tamanhoVetor = tamanho;
    printf("Entre com o primeiro e menor valor do intervalo: ");
    scanf("%d", &x);
    printf("Entre com o segundo e maior valor do intervalo: ");
    scanf("%d", &y);

    int vetorAleatorio = gerarVetorAleatorio(vetor[tamanhoVetor], x, y);

    int imprimir =  imprimeVetor(vetorAle;
}

int gerarVetorAleatorio(int v[tamanhoVetor], int a, int b){
    int i;
    srand(time(0));
    for(i=0; i < tamanhoVetor;i++){
        v[i] = (rand()%(a-b+1))+b;//int num[tamanhoVetor];
    }
    return v;
}
void imprimeVetor(int vet[]){
    int i = 0;
    for(i;i<tamanhoVetor;i++){
        printf("%d\n", vet[i]);
    }

}
