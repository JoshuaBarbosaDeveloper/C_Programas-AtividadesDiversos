// Situação de aprendizagem

#include <stdio.h> // Para usar...
#include <string.h> // Para usar strcpy
#include <stdlib.h> // Para usar...
#include <conio.h> // Para usar...

typedef struct {
				char dono[20];
				char esp[20];
				char nick[20];
				char raca[20];
				char sexo[20];
				char cell[20];
				
				int ID;
				int idade;
			   } Cadastro;

Cadastro animal[100] = {};

void relatorio() { //Funções que não fornecem respostas
				  printf ("Relatorio dos animais cadastrados	\n\n");
                  for (int i = 0; i <= 99; i++ ) {
                                                  if (animal[i].dono != '\0') {
                                                                               printf("-----------------------------\n");
                                                                               printf("ID: %d\n", i+1000);
                                                                               printf("Dono: %s\n", animal[i].dono);
                                                                               printf("Especie do animal: %s\n", animal[i].esp);
                                                                               printf("Nome do Animal: %s\n", animal[i].nick);
                                                                               printf("Raca do Animal: %s\n", animal[i].raca);
                                                                               printf("Sexo do Animal: %s\n", animal[i].sexo);
                                                                               printf("Idade do Animal: %d\n", animal[i].idade);
                                                                               printf("Telefone para Contato: %s\n", animal[i].cell);
                                                                               printf("----------------------------\n\n");
                                                                               break;
                                                                              }
                                                 }
getch();
system("cls");
                 }

void cadastrar() {
				  for (int i = 0; i <= 99; i++ ) { 
				  								  if (animal[i].dono[0] != '\0') {
				  	                              								  printf("\n----------ID do Cadastro: %d---------- \n", i+1000);
											   	  								  printf("Insira o Nome do Dono: ");
                                              	 								  fgets(animal[i].dono,20,stdin);
                                               	  								  printf("Insira a Especie do Animal: ");
                                               	  								  fgets(animal[i].esp,20,stdin);
                                               	  								  printf("Insira o Nome do Animal: ");
                                               	                                  fgets(animal[i].nick,20,stdin);
                                                                                  printf("Insira a Raca do Animal: ");
                                            	                                  fgets(animal[i].raca,20,stdin);
                         						                                  printf("Insira o Sexo do Animal: ");
                                                                                  fgets(animal[i].sexo,20,stdin);
                                                                                  printf("Insira a Idade do Animal: ");
                                                                                  scanf("%d", & animal[i].idade);
                                                                                  printf("Insira o Telefone para Contato: ");
                                               	                                  scanf("%s", & animal[i].cell);
                                            	                                  printf("\n---------------------------------------\n");
                                            	                                  break;
                                                                                 }         
												 }
                 }

int main () {char opc=1;
				
			 while (opc != '0'){
			 			 	    printf("Bem vindo ao PetShop Totoy & Cia!!\n\n");
			 				    printf("1 - Cadastrar \n");
			 				    printf("2 - Relatorio de Cadastros \n");
			 				    printf("0 - Sair\n");
			 				    printf("\n Insira a opcao desejada");	
			 				  
			 				    opc = getch();
			 				  
			 				    switch (opc){
							   				 case '1':
			 				  					      system("cls");
												      cadastrar();
			 				  					      break;
			 				  			    case '2':
			 				  			   		     system("cls");
			 				  			   		    relatorio();
			 				  			   		    break;
			 				  			    default:
			 				  			   		   system("cls");
			 				  			   		   break;
			 				                }
			 				   
			 				    }
			 				      			
							  	
			
			 
			
			 
}

