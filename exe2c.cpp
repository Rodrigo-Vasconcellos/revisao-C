#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, resposta;
	printf("gidite um numero: ");
	scanf("%d", &numero);
	for(int i = 0; i  <= 10; i++){
		resposta = i * numero;
		printf("%d x %d = %d\n", i, numero, resposta);
	}	
}


