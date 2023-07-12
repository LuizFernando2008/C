// Matrizes(arrays multi-dimensionais) pt. 1
#include <stdio.h>

int main(){

	// Strings
	char nome[3][50];
	for(int i = 0; i < 3; i++){
		printf("Qual o seu nome? ");
		fflush(stdout);
		gets(nome[i]);
	}
	for(int i = 0; i < 3; i++){
		printf("Olá %s!\n", nome[i]);
	}


	return 0;
}
