// Vetores(arrays uni-dimensionais) pt. 1
#include <stdio.h>

int main(){

	// Strings
	char nome[50];
	printf("Qual o seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("Olá %s!\n", nome);

	// Caractéres
	char letras[26];
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
	}
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n",letras[i], letras[i]);
	}

	return 0;
}
