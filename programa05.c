// Estrutura de repetição - do...while
#include <stdio.h>

/*
 * USANDO do...while
 * Faça um programa que receba e some números inteiros, até que o número
 * de entrada seja 0, apresentando a soma no final.
 */

int main(){

	// Inicialização
	int numero, soma = 0;

	// Processamento
	do{
		// Entrada
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}
	while(numero != 0);

	// Saída
	printf("A soma é %d.", soma);

	return 0;
}
