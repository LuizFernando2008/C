// Estruturas de repetição - for
#include <stdio.h>

/*
 * USANDO for
 * Faça um programa que receba e some 5 números inteiros, apresentando
 * a soma no final.
 */

int main(){

	// Inicialização
	int numero, soma = 0;

	// Estrutura de repetição
	for(int i = 0; i < 5; i++){

		// Entrada
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);

		// Processamento
		soma = soma + numero;
	}


	// Saída
	printf("A soma é %d.", soma);

	return 0;
}
