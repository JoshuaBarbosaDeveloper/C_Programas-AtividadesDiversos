#include <stdio.h>
#include <stdlib.h>

int main (){char nome[10];
		 	
		 	printf("Digite um nome: ");
		 	scanf("%s", & nome);
			
			printf("\n Essa palavra ao contrario e de: ");
			
			for (int i=10; i>=0; i-- ) printf("%c", nome[i]);}
		 	
