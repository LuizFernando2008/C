// Usando números binários
#include <stdio.h>

int main(){

	int valor = 2;
	printf("O valor é %d.\n", valor);

	// Deslocamento de bits p/ esquerda
	valor = valor << 2;
	printf("O valor é %d.\n", valor);

	valor = 2;
	// Deslocamento de bits p/ direita
	valor = valor >> 1;
	printf("O valor é %d.\n", valor);

	valor = 2;
	// Negação
	valor = ~valor;
	printf("O valor é %d.\n", valor);

	return 0;
}
