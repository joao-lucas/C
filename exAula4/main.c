#include <stdio.h>
#include <stdlib.h>
/*Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o resultado de seus cálculos. Escreva uma
função "hm" que converta minutos em horas-e-minutos. A funçao recebe um inteiro "mnts" e os endereços de duas variáveis
 inteiras,digamos "h" e "m", e atribui valores a essas  variáveis de modo que "m" seja menor que 60 e que "60*h + m"
seja ogual a "mnts". Escreva também uma função main que use a finção "hm".*/

void hm(int mnts, int* m, int *h){
    printf("\n... CONVERTERNDO HRS EM MINS");

//    while(mnts >= 60){
//      h += 1;
//        mnts -= 60;
//   }

    m = mnts;

    printf("\n__________________________");
    printf("\n%.2d:%.2d", h,m);
    printf("\n__________________________");
}

int main()
{
    int minutos = 0;
    int *m = 0;
    int *h = 0;
    printf("\nPROGRAMA QUE CONVERTE MINUTOS EM HORAS/MINUTOS!");
    printf("\nEntre com os minutos a serem convertidos em horas: ");
    scanf("%d", &minutos);

    hm(minutos, m, h);

}
