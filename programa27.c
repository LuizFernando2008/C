#include <stdio.h>

int main(){

	FILE *arq;
	char nome[20], *resultado;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		while(!feof(arq)){
			resultado = fgets(nome, 10, arq);
			printf("Resultado: %d.\n", resultado);
			if(resultado){
				printf("%s\n", nome);
			}
		}
	}else{
		printf("Não achei o arquivo...");

	}

	fclose(arq);

	return 0;
}
