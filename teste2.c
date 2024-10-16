#include <stdio.h>
#include <stdlib.h>

int main(){

struct elemento{ 
char nome[30];
char cep[30];
int a,b;
float preco;
int conta;
} Elem;

printf("Digite aqui o seu nome: ");
scanf("%s", Elem.nome);
printf("Digite aqui o seu cep: ");
scanf("%s", Elem.cep);
printf("Digite os valores: ");
scanf("%d %d", &Elem.a,&Elem.b);

Elem.conta = Elem.a + Elem.b;

system("pause");

printf("Seu Nome: %s\n Seu Cep: %s\n ", Elem.nome, Elem.cep);
printf("A conta deu: %d", Elem.conta);

return 0;
}