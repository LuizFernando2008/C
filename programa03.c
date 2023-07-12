// Estruturas de repeti��o - for
#include <stdio.h>

/*
 * USANDO for
 * Fa�a um programa que receba e some 5 n�meros inteiros, apresentando
 * a soma no final.
 */

int main(){

	// Inicializa��o
	int numero, soma = 0;

	// Estrutura de repeti��o
	for(int i = 0; i < 5; i++){

		// Entrada
		printf("Informe um n�mero: ");
		fflush(stdout);
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;
	}


	// Sa�da
	printf("A soma � %d.", soma);

	return 0;
}
