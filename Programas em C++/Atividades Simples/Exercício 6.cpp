#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[5]={1,2,3,4,5};
		 	int cubo[5];
		 	int i;
									
			for (i=0; i<=4; i++) cubo[i]=pow(vetor[i],3);
			
			for (i=0; i<=4; i++ ) printf("\n O cubo de %d e: %d", vetor[i],cubo[i]);}

