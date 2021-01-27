#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {int vetor[5];
			 int vetormaior;
			 int posi;
			 
			 vetormaior=0;
			 posi=0;
			 
			 for (int i=0; i<=4; i++) {printf("(%d/5) - Digite um numero: ", i+1); scanf("%d", & vetor[i]);}
			 			 
			 for (int i=0; i<=4; i++) {if (vetor[i]>vetormaior) vetormaior=vetor[i], posi=i;}
			 
			 printf("\n A posicao do maior numero e de: %d", posi);}
