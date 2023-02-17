#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], i, maior;
	
	i = 0;
	numeros[0] = 0;
	maior = numeros[0];
	
	printf("digite 10 numeros: ");
	for (i; i < 10; i++) {
		scanf("%d", &numeros[i]);	
	}
	
	for (i= 0; i< 10; i++) {
		if (maior < numeros[i]){
			maior = numeros[i];	
			
		}
	}
	printf("o maior numero digitado foi: %d", maior);		
}
	





