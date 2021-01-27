#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {int vetor[5];
			 int vetormaior;
			 
			 vetormaior=0;
			 
			 for (int i=0; i<=4; i++) {printf("(%d/5) - Digite um numero: ", i+1); scanf("%d", & vetor[i]);}
			 			 
			 for (int i=0; i<=4; i++) {if (vetor[i]>vetormaior) vetormaior=vetor[i];}
			 
			 printf("\n O maior numero e de: %d", vetormaior);}
