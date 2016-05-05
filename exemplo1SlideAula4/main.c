#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a, b;
    a = 5;
    b = 10;
    printf("\nEles valem %d, %d\n", a, b);
    swap(&a, &b);
    printf("\nEles valem agora %d, %d", a, b);

}
