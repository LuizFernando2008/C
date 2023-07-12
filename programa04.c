// Estrutura de repetição - while
#include <stdio.h>

/*
 * USANDO while
 * Faça um programa que receba e some números inteiros, até que o número
 * de entrada seja 0, apresentando a soma no final.
 */


int main(){

	// Inicialização
	int numero, soma = 0;

	// Entrada
	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	// Processamento
	while(numero != 0){
		soma = soma + numero;
		// Entrada
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	// Saída
	printf("A soma é %d.", soma);

	return 0;
}
