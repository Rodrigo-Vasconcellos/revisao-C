#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i = 0; i < 10; i++){
		printf("%d, ", i + 1);
	}	
}


