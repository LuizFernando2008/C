#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atoi();

int main(){

	char valorS[5];
	int valorI;

	strcpy(valorS, "4");

	valorI = atoi(valorS);

	printf("O valor é %d.\n", valorI);

	return 0;
}
