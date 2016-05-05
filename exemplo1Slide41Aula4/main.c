#include <stdio.h>
#include <stdlib.h>

void troca(int *i, int *j){
    int *temp;
    *temp = *i;
    *i = *j;
    *j = temp;

    printf("\ntemp", temp);
    printf("\ni: ", i);
    printf("\j: ", j);
}

int main()
{
    int *a = 5;
    int *b = 10;
    troca(&a, &b);

    printf("ola");
    return 0;
}
