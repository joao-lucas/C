#include <stdio.h>
#include <stdlib.h>

    void funcao(float *p){
        int i;
        for(i=0;i<2500;i++){
            *p  = 0.0;
            p++;
            printf("%d = %f\n", i, *p);
        }
    }

    int main(){
    float matriz[50][50];
    float *p;

    p = matriz[0];
    funcao(p);
    return 0;
    }

    //printf("Hello world!\n");
    //return 0;

