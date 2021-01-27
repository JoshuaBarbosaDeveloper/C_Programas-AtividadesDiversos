#include<stdio.h>
#include<math.h>

int main (){

float volumecone(float x, float y);      //Declarando a função
float volumecilindro(float x, float y); 
float volumeesfera(float x, float y);





float volume = volumecone(1,1);  //Variavel recebe o valor com argumento

printf("O volume do cone e %f", volume);








float volume1 = volumecilindro(1,1);

printf(" \nO volume do cilindro e %f", volume1);




return 0;
           }
           
           
    float volumecone(float r, float h) {    //Muda o argumento e declara
    	
    	float volume=(pow(r,2)*3.14*h)/3;
    	return volume;
    	
    
    	
                                    	}
                                    	
    float volumecilindro(float r, float h){
    	
    	float volume1=(pow(r,2)*h*3.14);
    	return volume1;
    	
    	
    	
	                                      }
