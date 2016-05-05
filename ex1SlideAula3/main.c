#include <stdio.h>
#include <stdlib.h>
/*Escreva uma funçãp que receba uma string e
imprima uma tabela com o numero de ocorrencias
de cada caractere na string. Escreva um programa
 para testar*/

void recebeString(int *vet[]){
        int i;
        for(i=0;i<5;i++){
            printf("Valor do elemento %d da string = %d\n",i, &vet[i]);
            //printf(".", vet[i]);
        }
}

int main()
{
 int i;

   //declarando e atribuindo valores no vetor de char
   int texto[6] = {'1','2','3','4','5','6'};
   int *p = texto;

   recebeString(&p);

   for(i=0;i<6;i++){

        printf("\nValor da variavel texto = %s\n", texto[i]);
   }
   //getch();
}
