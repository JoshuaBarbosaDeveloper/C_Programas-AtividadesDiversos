#include<stdio.h>

int main (){
	
	
	float calculararea(float x, float y); 
	
	
	
	
	float area = calculararea(10,20);
	
	
	
	
	printf("\n A area e %f",area );
	
	
	
	
	int multiplica(int a, int b);
	int mul = multiplica(5,20);
	
	
	
	
	printf("\n A multiplicação e de: %d", mul);
	


}


float calculararea(float base, float altura){
	
	float area= base * altura;
	
	return area;
	
	
	
}

int multiplica(int valor1, int valor2){

int mul = valor1*valor2;
return mul;}
