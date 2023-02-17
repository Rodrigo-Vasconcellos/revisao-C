#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	printf("gidite um ano: ");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
		printf("ano bissexto");
	} else {
		printf("ano normal");
	}
}