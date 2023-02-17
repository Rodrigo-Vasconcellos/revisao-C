#include <stdio.h>
#include <locale.h>

#define TAM 10
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[TAM];
	int i, j, aux;
	int soma = 0;
	int media = 0;
	int maior = 0;
	int menor, resposta;
	int quantidadePar = 0;
	int quantidadeImpar = 0;
	
	
		
	printf("digite 10 numeros:\n ");
	
	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);	
	}
	
	for( int i = 0; i < TAM; i++) {
		soma = soma + numeros[i];
	}
	
	
	media = soma / TAM;	
	
	printf("soma dos numeros do array de inteiros = %d\n", soma);
	printf("media dos numeros do array de inteiros = %d\n", media);
	
	for (i= 0; i< TAM; i++) {
		if (maior < numeros[i]){
			maior = numeros[i];	
			
		}
	}
	printf("o maior numero digitado foi: %d\n", maior);
	
	menor = maior;
	
	for (i= 0; i< TAM; i++) {
		if (menor > numeros[i]){
			menor = numeros[i];	
			
		}
	}
	printf("o menor numero digitado foi: %d\n", menor);	
	
	for (i= 0; i< TAM; i++) {
		if (numeros[i] % 2 == 0){
			quantidadePar = quantidadePar + 1;	
		} else {
			quantidadeImpar = quantidadeImpar + 1;
		}
	}
	printf("quantidade de numeros par: %d\n", quantidadePar);
	printf("quantidade de numeros impar: %d\n", quantidadeImpar);	
	
	//printf("digite [1] crescente  [2] decrescente: ");
	//scanf("%d", resposta);
	
//	if (resposta == 1) {
		
		for (j = 1; j < TAM; j++) {
			for (i = 0; i < TAM - 1; i++) {
				if (numeros[i] > numeros[i + 1]){
					aux = numeros[i];
					numeros[i] = numeros[i + 1];
					numeros[i + 1] = aux;		
				}		
			}
		}	
		printf("array ordenado de forma crescente: \n");	
		
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
	printf("]\n");
	
//	} else {
		
		for (j = 1; j < TAM; j++) {
			for (i = 0; i < TAM - 1; i++) {
				if (numeros[i] < numeros[i + 1]){
					aux = numeros[i];
					numeros[i] = numeros[i + 1];
					numeros[i + 1] = aux;		
				}		
			}
		}	
		printf("array ordenado de forma decrescente: \n");
//	} 

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
	printf("]\n");
				
}