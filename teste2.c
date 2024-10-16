#include <stdio.h>
#include <stdlib.h>

int main(){

char nome[30];
char cep[30];

printf("Digite aqui o seu nome: ");
scanf("%s", nome);
printf("Digite aqui o seu cep: ");
scanf("%s", cep);

system("pause");

printf("Seu Nome: %s\n Seu Cep: %s ", nome, cep);

return 0;
}