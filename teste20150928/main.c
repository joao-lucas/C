/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i;
     printf("intervalo da rand: [0,%d]\n", RAND_MAX);

    for(i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n",i, rand());
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*GERAR VETOR ALEATORIO E MOSTAR O MENOR VALOR E A MEDIA*/
void media(int Vet[]){
    int c = 0;
    double Soma = 0;
 while(c<5000){
    Soma += Vet[c];
    c++;
  }
    printf("A média é: %.2lf\n", (Soma / 5000));
}
void menor(int Vet[]){
    int c = 0;
    int Menor = 5000;
 while(c<5000){
    if (Vet[c] < Menor){
    Menor = Vet[c];
  }
    c++;
 }
    printf("O menor número do vetor é: %d\n", Menor);
}
int main(){
 //setlocale(LC_ALL, "Portuguese");
 int c = 0;
 int Vet[5000];

 srand(time(NULL));

 while(c<5000){
    Vet[c] = (rand() % 5000) + c;
    printf("%d\n", Vet[c]);
    c++;
 }

media(Vet);
menor(Vet);

}

  //  return 0;
//}
