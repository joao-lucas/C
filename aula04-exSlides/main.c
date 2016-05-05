#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, M[3][4];
for (t=0; t<3; ++t)
      for (i=0; i<4; ++i)
          M[t][i] = (t*4)+i+1;
for (t=0; t<3; ++t)
{
for (i=0; i<4; ++i)
       printf ("%3d ", M[t][i]);
printf ("\n");
     }
}

/*    int numbers[5];
    int *p;
    int n;
    p = numbers;
    *p = 10;
    p ++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;

    for(n = 0; n < 5; n ++)
        cout << numbers[n] << ", ";
    //printf("Hello world!\n");
    return 0;
}
*/
