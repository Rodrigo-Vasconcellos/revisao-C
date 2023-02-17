#include <stdio.h>
#include <locale.h>

#define TAM 10


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[TAM];
	int i, j, aux;
	
// forma de atribuir valores nos índices de um array 	
	printf("digite 10 numeros:\n ");
	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);	
	}

	printf("orde natual dos itens no array: \n");

// forma de exibir array 	
	printf("[");
	for  (i = 0; i < TAM; i++){
		if (i == TAM - 1) {
			printf(" %d", numeros[i]);	
		} else if (i == 0) { 
			printf("%d,", numeros[i]);	
		} else {
			printf(" %d,", numeros[i]);	
		}	
	}
	printf("]");
	
// logica para ordenar o array comparando a primeira posição com as outras, a segunda posição com as outras ...
	for (j = 1; j < TAM; j++) {
		for (i = 0; i < TAM - 1; i++) {
			if (numeros[i] > numeros[i + 1]){
				aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;		
			}		
		}
	}
	
	printf("\narray ordenado: \n");

// forma de exibir array 
	printf("[");
	for  (i = 0; i < TAM; i++){
		if (i == TAM - 1) {
			printf(" %d", numeros[i]);	
		} else if (i == 0) { 
			printf("%d,", numeros[i]);	
		} else {
			printf(" %d,", numeros[i]);	
		}	
	}
	printf("]");
	
}