#include <stdio.h>
#include <stdlib.h>

int maiorvalor(int);
//int fatorial(int);
//float mediaArit(float, float);

void main(){
int vetor[5];
int i;
 for(i=0;i<5;i++){
    printf("Entre com o valor do vetor na posicao: %d", &i);
    scanf(vetor[i]);
 }
 }

 int maiorvalor(vetor);

// int maiorvalor(){
//    return 0;
// }

//float valor1, valor2, media;
//printf("Entre com primeiro valor:");
//scanf("%d", &valor1);
//printf("Entre com segundo valor: ");
//scanf("%d", &valor2);

//media = mediaArit(valor1, valor2);
//printf("Media Aritmetica: %f", media);
//printf("valor fatorado: %d", fatorial(num));

//}

// MOSTRAR O MAIOR NUMERO DE UM VETOR


/*
// MEDIA ARITMETICA
float mediaArit(float valor1, float valor2){
return((valor1+valor2)/2);

//printf("Media Artmetica: %d", &media);

//return(media)

}

/*
// FATORIAL
double fatorial(int n){
int i;
double fat=1.0;
for(i=1;i<n;i++){
    fat=fat*i;
}
return(fat)
}
}


/*
int fatorial(int);
void main()
{
    int valor;

    printf("Entre com o valor que se deseja encontrar seu fatorial: ");
    scanf("%d", &valor);
    fatorial(valor);
    printf("valor fatorado: %d", &valor);
}

    int fatorial(int valor){
    int fat;

    for(fat=1;valor > 1;valor = valor - 1){
        fat=fat*valor;
    }
    return fat;
}
/*
int main(){
int fat;
int n;
printf("Insira um valor para o qual deseja calcular seu fatorial:\n");
scanf("%d",&n);
fflush(stdin);

for(fat = 1; n > 1; n = n - 1){
fat = fat * n;
}
printf("Fatorial calculado: %d\n", fat);
system("pause");
return 0;
}
*/
