#include <stdio.h>
#include "ajuda.h"

int main(){

	mensagem();

	int n1, n2, retS, retM;

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	retS = soma(n1, n2);
	printf("A soma de %d com %d é %d.\n", n1, n2, retS);

	retM = multiplicacao(n1, n2);
	printf("A multiplicação de %d com %d é %d.\n", n1, n2, retM);

}
