#include <stdio.h>
#include <locale.h>

void soma (int x, int y) {
		int resposta = x + y;
	
		printf("a soma de %d + %d = %d", x, y, resposta);	
	}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	soma (2, 3);
	
}