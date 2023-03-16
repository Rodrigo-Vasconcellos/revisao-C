#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemento {
    int valor;
    char  nome[50];
    char email[50];
    struct elemento *proximo;
} Elemento;

void main() {
    Elemento *primeiro = NULL;
    Elemento *ultimo = NULL;
    
    char continuar = 's';
    while (continuar == 's'){
    
    	
    	Elemento *atual = (Elemento*) malloc(sizeof(Elemento));
        
        atual->proximo = NULL;
        
        fflush(stdin);
        printf("digite valor: ");
        scanf("%d", &atual->valor);
        
        fflush(stdin);
        printf("digite nome: ");
        scanf("%s", &atual->nome);
        
        fflush(stdin);
        printf("digite email: ");
        scanf("%s", &atual->email);
        
        fflush(stdin);
        printf("quer continuar[s/n]: ");
    	scanf("%c", &continuar);
    	
        
        if (primeiro == NULL) {
            primeiro = atual;
            ultimo = atual;
        } else {            
            ultimo->proximo = atual;
            ultimo = atual;
        }
        
	}
    

    Elemento *iterador = primeiro;
    while (iterador != NULL) {
        printf("%d\n", iterador->valor);
        printf("%s\n", iterador->nome);
        printf("%s\n", iterador->email);
        printf("");
        Elemento *proximo = iterador->proximo;
        free(iterador);
        iterador = proximo;
    }






}
