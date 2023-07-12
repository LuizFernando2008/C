#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atof();

int main(){

	char valorS[5];
	double valorD;

	strcpy(valorS, "4.5");

	valorD = atof(valorS);

	printf("O valor é %.2f.\n", valorD);

	return 0;
}
