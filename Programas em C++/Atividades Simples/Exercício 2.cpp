#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[8]={1,2,3,4,5,6,7,8};
			int result;

            result=0;
    						
			for (int i=0; i<=7; i++) result=result+vetor[i];
			
			printf("A soma desses valores e de: %d", result);}
