#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {int vetor[5];
			 int vetormenor;
			 int vetormaior;
			 
			 for (int i=0; i<=4; i++) {if (vetor[i]>vetormaior) vetormaior=vetor[i];}
			 
			 vetormenor=vetormaior;
			 
			 for (int i=0; i<=4; i++) {printf("(%d/5) - Digite um numero: ", i+1); scanf("%d", & vetor[i]);}
			 			 
			 for (int i=0; i<=4; i++) {if (vetor[i]<vetormenor) vetormenor=vetor[i];}
			 
			 printf("\n O menor numero e de: %d", vetormenor);}
