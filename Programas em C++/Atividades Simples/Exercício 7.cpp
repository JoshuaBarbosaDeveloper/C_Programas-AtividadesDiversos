#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor1[5];
		 	int vetor2[5];
		 	int resultado[5];
		 	int i;
									
			for (i=0; i<=4; i++) {printf("(%d/5) - Digite um numero para entrar no vetor 1: ", i+1); scanf("%d", & vetor1[i]);}
			
			printf("------------------------------------------------------------ \n");
			
			for (i=0; i<=4; i++) {printf("(%d/5) - Digite um numero para entrar no vetor 2: ", i+1); scanf("%d", & vetor2[i]);}
			 
			printf("------------------------------------------------------------ \n");
			
			for (i=0; i<=4; i++) {resultado[i]=vetor1[i]+vetor2[i]; printf("\n A soma dos valor da posicao %d e de: %d", i, resultado[i]);}}
			
			

