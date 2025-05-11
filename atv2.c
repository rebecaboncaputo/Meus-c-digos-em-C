#include <stdio.h>


int main(){
char nome[30];
char sobrenome[30];

printf("escreva seu nome ");
scanf("%s", nome);

printf("escreva seu sobrenome ");
scanf("%s", sobrenome);

printf("seu nome e %s %s ", nome, sobrenome);


return 0;
}
