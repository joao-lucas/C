#include <stdio.h>
#include <stdlib.h>

int main()
{
 char *a, *b;
b = "abacate";
a = "uva";

if(a < b){
	printf("%s vem antes de %s no dicionario", a, b);
} else {
	printf("%s vem depois de %s no dicionario", a, b);
 }

}
