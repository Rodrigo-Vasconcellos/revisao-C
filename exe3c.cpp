#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[3][3], i, j, maior;
	numeros[i][j] = 0;
	maior = numeros[i][j];
	
	printf("digite numeros para preencher a matriz:\n ");
		
// forma de atribuir valores nos índices de um matriz	
	for ( i=0; i<3; i++ ){
  		for (j=0; j<3; j++){
     		scanf ("%d", &numeros[ i ][ j ]);
  	  	}
	}
	
// forma de exibir matriz
	for ( i=0; i<3; i++ ){
    	for (j=0; j<3; j++) {
      		printf ("\nElemento[%d][%d] = %d\n", i, j,numeros[ i ][ j ]);
    	}	
	}

// 	logica para encontrar o maior numero na matriz 
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (maior < numeros[i][j]){
				maior = numeros[i][j];	
			}
		}
	}
	
	printf("o maior numero digitado foi: %d", maior);
	
}