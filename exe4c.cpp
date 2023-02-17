#include <stdio.h>
#include <locale.h>
#define TAMANHO 10


void quantidadeDeVogais ( char texto[TAMANHO]) {
	int quantidade =0;
	
	for (int i = 0; i < TAMANHO; i++) {
		if ((texto[i] == 'a') || (texto[i] == 'A') || (texto[i] == 'e') || (texto[i] == 'E') || (texto[i] == 'i') || (texto[i] == 'I') || (texto[i] == 'o') || (texto[i] == 'O') || (texto[i] == 'u') || (texto[i] == 'U')) {
			quantidade = quantidade + 1;	
		}	
	}
	printf("%d", quantidade);
}




int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char texto[TAMANHO];
	
	printf("digite um texto deste tamanho %d \n ", TAMANHO);
	for (int i = 0; i < TAMANHO; i++) {
		scanf("%c", &texto[i]);	
	}
	
	quantidadeDeVogais(texto);
		
}
