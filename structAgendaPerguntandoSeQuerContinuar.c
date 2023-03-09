#include <stdio.h>

#include <stdlib.h>
#include <string.h>
typedef struct agenda {
	char nome[50];
	char telefone[50];
	char email[50] ;
	int idade;
} Ag;
Ag contatos[10];

//typedef struct agenda Ag; 

int main (){
/*	struct agenda contato1;

	
	strcpy(contato1.nome, "rodrigo");
	strcpy(contato1.telefone, "44 9 9760 6060 ");
	strcpy(contato1.email, "rodrigo-jaka@hotmail.com");
	contato1.idade = 30;
		printf("nome: %s \n",contato1.nome );
		printf("idade: %d \n",contato1.idade );
		printf("email: %s \n",contato1.email );
		printf("telefone: %s \n ",contato1.telefone);
	
	
	
	Ag contato2;
	contato2.idade = 25;
	strcpy (contato2.nome, "jojo");
		printf("idade do contto 2: %d \n nome contato 2: %s\n",contato2.idade, contato2.nome);
	
	
	
	Ag contato3 = {"rika", "44 9 9898 9898", "rodrigo@123", 55};
		printf("nome: %s \ntelefone: %s \nemail: %s \nidade: %d\n",
		 contato3.nome, contato3.telefone, contato3.email, contato3.idade);
		 
		 
		 
	Ag contato4;*/	
	int i;
	for (i=0; i<10; i++){
		char opcao = "n";
		printf("quer continuar[s/n]?: ");
		scanf("%c", &opcao);
		
		
		if (opcao == 's'){
			printf("\nnome: ");
			scanf("%s", &contatos[i].nome );
			printf("\ntelefone: ");
			scanf("%s", &contatos[i].telefone);
			printf("\nemail: ");
			scanf("%s", &contatos[i].email );
			printf("\nidade: ");
			scanf("%d", &contatos[i].idade);
			
		} else {
			break;
		}
		fflush(stdin);
	} 
	
	for (i=0; i<10; i++){
	printf("nome: %s\n telefone: %s\n email: %s\n idade: %d\n",
		contatos[i].nome, contatos[i].telefone, contatos[i].email, contatos[i].idade);	 
	}
		
}
