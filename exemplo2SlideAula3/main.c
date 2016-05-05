#include <stdio.h>
#include <stdlib.h>

void imprime(char* s){
    int i;
    for(i=0;s[i] != '\0';i++){
        printf("%c", s[i]);

    }
}

int comprimento(char* s){
int i;
int n = 0;
for(i=0;s[i] != '\0';i++){
        n ++;
        return n;
  }
}

void copia(char* destino, char *original){
    int i;
    for(i=0;original[i] != '\0'){
        destino[i] = original[i];
        destino[i] = '\0';
    }
}



int main()
{
    printf("Hello world!\n");
    return 0;
}
