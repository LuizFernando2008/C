#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p, linhas = 3, colunas = 3;
	p = (int*)malloc(linhas * colunas * sizeof(int));

	p[0] = 3;
	p[1] = 6;
	p[2] = 9;

	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			p[i * colunas + j] = 3 * i + j;
		}
	}

	for(int i = 0; i < linhas; i++){
			for(int j = 0; j < colunas; j++){
				printf("%d\n", p[i * colunas + j]);
			}
		}

	free(p);
	p = NULL;

	return 0;
}


