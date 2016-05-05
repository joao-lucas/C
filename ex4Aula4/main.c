#include <stdio.h>

/*Ex2) Um ponteiro pode ser usado para dizer a uma função onde
ela deve depositar o resultado de seus cálculos. Escreva uma
função "hm" que converta minutos em horas-e-minutos. A funçao
recebe um inteiro "mnts" e os endereços de duas variáveis
 inteiras,digamos "h" e "m", e atribui valores a essas
variáveis de modo que "m" seja menor que 60 e que "60*h + m"
seja ogual a "mnts". Escreva também uma função main que use
a finção "hm".*/

void hm(int mnts, int *h, int *m){
    printf("\n... CONVERTENDO");
	*h = (mnts/60); //  Converte horas em Minutos (Somente horas cheias)
    *m = (mnts%60); // pega o resto dos minutos que sobraram.
}

void main(void){

    int minutos = 0;
    int *h =0;
    int *m = 0;

    printf("\nPROGRAMA QUE CONVERTE MINUTOS EM HORAS/MINUTOS.");
    printf("\nEntre com os Minutos que deseja Converter: ");
    scanf("%d", &minutos);

    hm(minutos, &h,&m);

    printf("\n\n%d Minutos equivalem a: %.2d:%.2d horas", minutos, h,m);

}
