#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, fatorial;
	printf("gidite um numero: ");
	scanf("%d", &numero);
	
	printf("%d!: ", numero);
		for (fatorial = 1; numero > 1; numero = numero - 1){
			printf("%d x ", numero);
			fatorial = fatorial * numero;				
		}
		
	printf("1 = ");		
	printf("%d", fatorial);	
}


