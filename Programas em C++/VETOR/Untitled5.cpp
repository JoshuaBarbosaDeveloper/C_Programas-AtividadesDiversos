#include <stdio.h>
#include <stdlib.h>

int main () {int x[10];
			 int i;
			 int multi;
			 int n;
			 
			 multi=1;			 
			 			 
			 printf("Voce deseja fazer tabuada de que numero? ");
			 scanf("%d", & n);
			 
             for (i=1; i<=10; i++) {x[i]=n*multi; multi = multi + 1; printf("\n %d X %d = %d ", n, multi, x[i]);}}
			 
