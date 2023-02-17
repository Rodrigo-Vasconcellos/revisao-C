#include <stdio.h>
#include <locale.h>
#define TAM 5

// função que calcula a media 
void media (int arrayInteiros[TAM]) {
		int soma = 0;
		int media = 0;
		for( int i = 0; i < TAM; i++) {
			soma = soma + arrayInteiros[i];
		}
		media = soma / TAM;	
		printf("media dos numeros do array de inteiros = %d", media);	
	}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int arrayInteiros[TAM];
	
	
// forma de atribuir valores nos índices de um array 	
	printf("digite %d numeros:\n ", TAM);
	for (int i = 0; i < TAM; i++) {
		scanf("%d", &arrayInteiros[i]);	
	}
	
	 	
// chamada da função media 	
	media (arrayInteiros);
	
}