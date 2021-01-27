#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {int vetor[5]={1,2,3,4,5};
			 int num;
			 
			 printf("Digite um numero: ");
			 scanf("%d", & num);
			 
			 for (int i=0; i<=4; i++)  {if (num==vetor[i]) printf("\n Numero encontrado!");
			 						   if (num!=vetor[i])printf("\n Numero nao encontrado!");}}
