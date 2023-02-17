#include <stdio.h>
#include <locale.h>

#define TAM 10
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[TAM];
	int i, j, aux;
	int soma = 0;
	int media = 0;
	 	
	printf("digite 10 numeros:\n ");
	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);	
	}
	
	for( int i = 0; i < TAM; i++) {
		soma = soma + numeros[i];
	}
	media = soma / TAM;	
	printf("media dos numeros do array de inteiros = %d", media);	

	for (j = 1; j < TAM; j++) {
		for (i = 0; i < TAM - 1; i++) {
			aux = numeros[i];
			numeros[i] = numeros[i + 1];
			numeros[i + 1] = aux;		
		}		
	}
	printf("\narray ordenado de forma crescente: \n");
	
	printf("[");
	for  (i = 0; i < TAM; i++){
		if(numeros[i] > media) {
			if (i == TAM - 1) {
				printf(" %d", numeros[i]);	
			} else if (i == 0) { 
				printf("%d,", numeros[i]);	
			} else {
				printf(" %d,", numeros[i]);	
			}
		}		
	}
	printf("]");
			
}