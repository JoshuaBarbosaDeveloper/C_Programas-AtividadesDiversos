#include <stdio.h> //Para usar printf scanf
#include <string.h> // Para utilizar strcpy
typedef struct { char dono[20] = {};
char nome[20];
char raca[20];
char sexo;
int idade;
} animal;

animal cachorro[10];

int main() {
strcpy(cachorro[0].dono, "Stefani");
strcpy(cachorro[0].nome, "Lilica");
strcpy(cachorro[0].raca, "Pinscher");
cachorro[0].idade = 3;
cachorro[0].sexo = 'F';

strcpy(cachorro[1].dono, "Felipe");
strcpy(cachorro[1].nome, "Pinscher");
strcpy(cachorro[1].raca, "Pinscher");
cachorro[1].idade = 7;
cachorro[1].sexo = 'M';

printf("RELATORIO DE ANIMAIS CADASTRADOS\n");

for (int i = 0; i <= 9; i++) {
if (cachorro[i].dono[0] != '\0') {
printf("---------------------------\n");
printf("Dono: %s\n", cachorro[i].dono);
printf("Nome do animal: %s\n", cachorro[i].nome);
printf("Raca: %s\n", cachorro[i].raca);
printf("Idade: %d\n", cachorro[i].idade);
printf("Sexo: %c\n", cachorro[i].sexo);
printf("--------------------------\n\n");
}
}

}
