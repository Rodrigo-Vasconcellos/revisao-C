#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	printf("digite o peimeiro numero: ");
	scanf("%d", &x);
	printf("digite o segundo numero: ");
	scanf("%d", &y);
	if (x > y) {
		printf("este valor e o mair: %d", x);
	} else if (y > x) {
		printf("este valor e o mair: %d", y);
	} else {
		printf("%d  e iqual %d",x ,y);
	}
}
	
	
	