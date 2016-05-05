#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba
stringd x e s e devolve o indive da posicao
a partir da qual x ocorre em s.

(compare coma fnção strstr da bibliotea
 string)*/

main()
{
    char *x = "joão lucas";
    char *s = "toTestando";
    char *ptr; //é um ponteiro que irá armazenar o início da substring.

    ptr = strstr(x, s);
    printf("A variavel S é: %s\n", ptr);

    printf("\nPressione uma tecla para finalizar");
   // getch();
}
