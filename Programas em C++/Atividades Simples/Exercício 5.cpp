#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[11]={10,11,12,13,14,15,16,17,18,19,20};
			int result;
			
			result=0;
			
			printf("Os valores pares de tras para frente sao: ");
						
			for (int i=10; i>=0; i--) if (vetor[i]%2==0) printf("%d, ", vetor[i]);}
