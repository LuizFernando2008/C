#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atol();

int main(){

	char valorS[500];
	double valorLI;

	strcpy(valorS, "693964351");

	valorLI = atol(valorS);

	printf("O valor é %.2lf.\n", valorLI);

	return 0;
}
