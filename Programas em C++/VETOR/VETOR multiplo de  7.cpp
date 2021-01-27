#include <stdio.h>
#include <stdlib.h>

int main () {int x[10];
			 int i;
			 int q;
			 
			 q=0;
			 
			 for(i=0; i<=9; i++){scanf("%d", & x[i]);}
			 
			 for(i=0; i<=9; i++) if(x[i]%7==0) q = q + 1;
			 
			 printf("\nA quantidade de numeros divisiveis por 7 e de: %d", q);}
			 
