#include <stdio.h>
#include <stdlib.h>

// realloc - Realocação de memória

int main(){

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)malloc(qtd * sizeof(int));

	if(p){
		printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * (long int)sizeof(int));

		printf("Informe a quantidade de elementos para o vetor: ");
		fflush(stdout);
		scanf("%d", &qtd);

		p = (int*)realloc(p, qtd * sizeof(int));

		if(p){
			printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * (long int)sizeof(int));
		}else{
			printf("Erro: memória insuficiente!\n");
		}

	}else{
		printf("Erro: memória insuficiente!\n");
	}

	free(p);
	p = NULL;

	return 0;
}
