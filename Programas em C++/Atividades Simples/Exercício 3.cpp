#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[8]={1,2,3,4,5,6,7,8};
			int result;
			
			result=0;
						
			for (int i=0; i<=7; i++) if (vetor[i]%2==0) result=result+1;
			
			printf("A quantidade de numeros pares e de: %d", result);}
