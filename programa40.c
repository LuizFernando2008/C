// ifndef - Diretiva de compilação
#include <stdio.h>

#ifndef PI
	#define PI 3.1415 // Constante - não varia
#endif

int main(){

	int valor = 5;
	valor = 467;
	printf("O valor é %d.\n", valor);

	printf("PI vale %.4f.\n", (2 * PI));


	return 0;
}
