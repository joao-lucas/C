#include <stdio.h>
#include <stdlib.h>


/*Escreva uma função que receba uma string e
imprima uma tabela com o numero de ocorrencias
de cada caractere na string. Escreva um programa
para testar a função
PAGINA 40
*/

void recebeString(char s1[]){
    int i, n = 0;
    for(i=0;s1[i] != '\0'; i++){
        printf("%c", s1[i]);
       n++;
        printf("Numeros de Ocorrencias: %d\n", n);
    }
}

int main()
{
    char s[] = "Joao Lucas";
    recebeString(s);
}


