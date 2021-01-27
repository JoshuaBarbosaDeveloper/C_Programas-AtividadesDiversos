#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){int vetor[8]={15,75,3,4,5,6,7,8};
			int result;
			
			result=0;
						
			for (int i=0; i<=7; i++) if (vetor[i]%3==0&&vetor[i]%5==0) result=result+1;
			
			printf("A quantidade de valores divisiveis por 3 e 5 ao mesmo tempo e de: %d", result);}
