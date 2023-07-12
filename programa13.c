// Vetores(arrays uni-dimensionais) pt. 2
#include <stdio.h>

int main(){

	// Números inteiros
	int numerosInteiros[5];
	numerosInteiros[0] = 1;
	numerosInteiros[1] = 3;
	numerosInteiros[2] = 5;
	numerosInteiros[3] = 7;
	numerosInteiros[4] = 9;

	// Números reais
	float numerosReais[5];
	for(int i = 0; i < 5; i++){
		numerosReais[i] = (float)numerosInteiros[i] / 2;
	}
	for(int i = 4; i >= 0; i--){
		printf("%.1f\n", numerosReais[i]);
	}

	return 0;
}
