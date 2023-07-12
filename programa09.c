// Tipos de dados - Tipos alfanuméricos pt. 2
#include <stdio.h>

int main(){

	char nome[50];

	printf("Qual é o seu nome? ");
	fflush(stdout);
	gets(nome);

	printf("Seu nome é %s", nome);

	return 0;
}
