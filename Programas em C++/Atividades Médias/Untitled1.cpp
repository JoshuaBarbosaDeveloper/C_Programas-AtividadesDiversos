// Software petshop

#include <stdio.h>
#include <string.h> // Para usar strcpy
#include <stdlib.h>
#include <conio.h>

typedef struct {
char dono[20];
char nome[20];
char especie[20];
char raca[20];
int idade;
} animalCadastro;

animalCadastro pet[100] ={};


// Função para geração do relatório de animais cadastrados
void relatorioAnimais() { //Funções que não fornecem respostas
printf ("RELATORIO DE ANIMAIS CADASTRADOS\n\n");
for (int i = 0; i <= 99; i++ ) {
if (pet[i].dono[0] != '\0') {
printf("-----------------------------\n");
printf("Dono: %s\n", pet[i].dono);
printf("Nome do animal: %s\n", pet[i].nome);
printf("Especie: %s\n", pet[i].especie);
printf("Raca: %s\n", pet[i].raca);
printf("Idade: %d Anos\n", pet[i].idade);
printf("----------------------------\n\n");
}
} // i + 1

getch();
system("cls");
}
// -----------------------------------------------------------

void cadastrar() {
strcpy(pet[0].dono, "Stefani");
strcpy(pet[0].nome, "Lilica");
strcpy(pet[0].especie, "Cachorro");
strcpy(pet[0].raca, "Pinscher");
pet[0].idade = 3;

strcpy(pet[1].dono, "Felipe");
strcpy(pet[1].nome, "Pinscher");
strcpy(pet[1].especie, "Cachorro");
strcpy(pet[1].raca, "Pinscher");
pet[1].idade = 7;

strcpy(pet[2].dono, "Pedro");
strcpy(pet[2].nome, "Pipoca");
strcpy(pet[2].especie, "Cachorro");
strcpy(pet[2].raca, "Vira Lata");
pet[2].idade = 2;
}


// Função Principal do Software
int main() {

char opcao=1;

cadastrar();


// Imprime menu
while(opcao != '0') { // Verifica se a opcao é diferente de 0, pois, se ela for 0 deve sair do sistema
printf("Escolha uma opcao\n\n"); // Imprime o menu
printf("1 - Relatorio de animais cadastrados\n");
printf("0 - Sair\n");
scanf("%c",&opcao); // Coleta entrad	a do menu
system("cls"); // Limpa tela

switch(opcao) { //Verifica tecla digitada
case '1': // Se a tecla foi 1
relatorioAnimais(); // Imprime o relatorio de animais
break;


default:
break;
}

}

printf("\n\n\nObrigado por usar o PetSoft\n\n\n");

return 0;
}
