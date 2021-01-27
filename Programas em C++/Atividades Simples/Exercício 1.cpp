#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[8]={14,12,151,123,51,23,85,29};
			int result;
			
			result=0;
						
			for (int i=0; i<=7; i++) if (vetor[i]>=30) result=result+1;
			
			printf("A quantidade de valores maiores que 30 e de: %d", result);}
