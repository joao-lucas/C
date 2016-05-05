#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    FILE *arquivo;
    arquivo=fopen("/home/joao_lucas/algoritimo/exemplo7.txt","r");
    while(fscanf(arquivo, "%f", &f) != EOF){
        printf("%f\n", f);
    }
}
