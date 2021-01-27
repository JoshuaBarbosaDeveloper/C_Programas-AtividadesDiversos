#include <stdio.h>
#include <stdlib.h>

int main (){char nome[10];
		 	
		 	printf("Digite um nome: ");
		 	scanf("%s", & nome);
			
			printf("\n As primeiras 4 letras do seu nome e: ");
			
			for (int i=0; i<=3; i++ ) printf("%c", nome[i]);}
		 	
