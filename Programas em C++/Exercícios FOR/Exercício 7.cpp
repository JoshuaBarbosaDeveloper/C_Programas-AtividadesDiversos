/*
Nome: Joshua Barbosaa
Data: 09/10/2019
*/

#include<stdio.h> //função para ler e escrever
#include<math.h> //função para desenvolver calculos

int main(){int inteiro, num1, num2;

		   printf("\n Escolha o primeiro numero: ");
		   scanf("%d", & num1);
		   
		   printf("\n Escolha o segundo numero: ");
		   scanf("%d", & num2);
		   
		   printf("\n Os valores somados entre esses numeros sao: ");
			
		   for (inteiro=num1; inteiro<=num2; inteiro++) num1=inteiro+num1; {printf("%d, ", num1);}}
