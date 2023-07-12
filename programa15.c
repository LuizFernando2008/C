// Matrizes(arrays multi-dimensionais) pt. 2
#include <stdio.h>

int main(){

	// Números inteiros
	int numerosInteiros[2][2];
	numerosInteiros[0][0] = 1;
	numerosInteiros[0][1] = 2;
	numerosInteiros[1][0] = 3;
	numerosInteiros[1][1] = 4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Números[%d][%d] vale %d.\n", i, j, numerosInteiros[i][j]);
		}
	}

	// Números reais
	float numerosReais[5][5];

	return 0;
}
