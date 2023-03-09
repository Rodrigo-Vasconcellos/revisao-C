#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main () {
	int a = 10;
	int *nomeDaVariavel = &a;
	
	printf("a vale %d\n", a);
	printf("endereço de moria da variavel a vale: %d\n", nomeDaVariavel);
}
