#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {int vetor[5];
			 
			 for (int i=0; i<=4; i++) {printf("(%d/5) - Digite um numero: ", i+1); scanf("%d", & vetor[i]);}
			 
			 if (vetor[0]>vetor[1]&&vetor[0]>vetor[2]&&vetor[0]>vetor[3]&&vetor[0]>vetor[4])  printf("\n O maior numero e: %d", vetor[0]);
			 
			 if (vetor[1]>vetor[0]&&vetor[1]>vetor[2]&&vetor[1]>vetor[3]&&vetor[1]>vetor[4])  printf("\n O maior numero e: %d", vetor[1]);
			 
			 if (vetor[2]>vetor[1]&&vetor[2]>vetor[0]&&vetor[2]>vetor[3]&&vetor[2]>vetor[4])  printf("\n O maior numero e: %d", vetor[2]);
			 
			 if (vetor[3]>vetor[1]&&vetor[3]>vetor[2]&&vetor[3]>vetor[0]&&vetor[3]>vetor[4])  printf("\n O maior numero e: %d", vetor[3]);
			 
			 if (vetor[4]>vetor[1]&&vetor[4]>vetor[2]&&vetor[4]>vetor[3]&&vetor[4]>vetor[0])  printf("\n O maior numero e: %d", vetor[4]);}
