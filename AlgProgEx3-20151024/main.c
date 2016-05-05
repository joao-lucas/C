//obs: nao consegui mostrar o ponto mais proximo do primeiro

#include <stdio.h>
#include <stdlib.h>

/*3) Desenvolva um programa em c que leia 5 pontos.
 Em seguida imprima qual o ponto mais próximo do primeiro ponto lido.*/

typedef struct {
    int x;
    int y;
} Ponto;

/*
void receberPontos(struct pontos p[]){
    int i;
    for(i=0;i<5;i++){
        printf("\nEntre com o valor do Ponto [%d] :", i);
        scanf("%d", &p[i].valor);
    }

}

void imprimirPontoMaisProximodoPrimeiro(struct pontos p[]){
    p[0].primeiroPonto = p[0].valor;
    printf("Calculando ponto mais proximo do ponto: %d", p[0].primeiroPonto);
    int i;
    int posicaoMaisProximo;
    for(i=1;i<5;i++){
        int moduloValorPonto = p[i].valor;
        if (moduloValorPonto < 0){
            moduloValorPonto = moduloValorPonto*(-1);
        } else if (moduloValorPonto.){

        }

    }
}
*/

#define QTD_Pontos 5

int main()
{
   Ponto pontos[QTD_Pontos];

   printf("\nCampos: x,y\n");
   int i;
   for(i=1;i<QTD_Pontos;i++){
        printf("\nInsiras as do ponto (%d) ", i+1);
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
    }

    int menorDistanciaAoQuadrado = QTD_Pontos;
    int pontoMaisProximo = 1;
    int i;
    for(i=1;i<QTD_Pontos;i++){
        int distanciaAoQuadrado = (pontos[i].x-pontos[0].x)*(pontos[i].x-pontos[0].x)+(pontos[i].y-pontos[0].y)*(pontos[i].y-pontos[0].y));

        if(distanciaAoQuadrado < menorDistanciaAoQuadrado){
            pontoMaisProximo=i;
            menorDistanciaAoQuadrado = distanciaAoQuadrado
        }
    }
    printf("\nPonto mais Proximo: (%d, %d)", pontos[pontoMaisProximo].y);
    return 0;
}
