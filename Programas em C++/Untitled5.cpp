#include <stdio.h>

int main () {int matriz[10][10]; //Declarar matriz
			 int i, j; //Declarar linha e coluna
			 
			 for (i=0; i<=9; i++){//Varrer linhas
			 					  for (j=0; j<=9; j++){//Varrer colunas
								   					   if (i>j) matriz[i][j]=(2*i)+(7*j);//Declarar valor de X(i)(j) com uma condição
													   if (i==j) matriz[i][j]=-3*(i*i)-1;//Declarar valor de X(i)(j) com uma condição
													   if (i<j) matriz[i][j]=-4*(i*i*i)-5*(j*j)+1;}}//Declarar valor de X(i)(j) com uma condição
		
			 for (i=0; i<=9; i++){//Varrer linhas
			 					  for (j=0; j<=9; j++){//Varrer colunas
								   					   printf("%d ", matriz[i][j]);}//Escrever a matriz X(i)(j)
								  printf("\n");}}//Pular a linha
