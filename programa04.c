// Estrutura de repeti��o - while
#include <stdio.h>

/*
 * USANDO while
 * Fa�a um programa que receba e some n�meros inteiros, at� que o n�mero
 * de entrada seja 0, apresentando a soma no final.
 */


int main(){

	// Inicializa��o
	int numero, soma = 0;

	// Entrada
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	// Processamento
	while(numero != 0){
		soma = soma + numero;
		// Entrada
		printf("Informe um n�mero: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	// Sa�da
	printf("A soma � %d.", soma);

	return 0;
}
