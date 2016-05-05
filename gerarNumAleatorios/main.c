#include <stdio.h>
#include <stdlib.h>
#define QTD_INTERFACES 26000

int main()
{
    int i;
    int num[QTD_INTERFACES];

    srand(time(NULL));

    for(i=0;i<QTD_INTERFACES;i++){

        printf("%d\n", num[i] = rand());
    }

    i = (i-1);

    for(i;i>=0;i--){
        printf("%d\n", num[i]);
    }
}
