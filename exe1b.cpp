#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	printf("digite um numero: ");
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("numero par");
	} else {
		printf("numero impar");
	}
	
}