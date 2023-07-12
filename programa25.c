#include <stdio.h>

int main(){

	FILE *arq;

	/*
	 * fopen("nome do aquivo", "forma de abertura do arquivo");
	 * w - abrir o arquivo para escrita (se o aquivo ja existir, será sobrescrito com um novo zerado).
	 * r - abrir o arquivo para leitura (nesse caso, não podemos escrever no arquivo).
	 * a - abrir o arquivo para adição de conteúdo (se o arquivo já existir, o conteúdo será adicionado nas linhas abaixo).
	 */
	arq = fopen("arquivo.txt", "w");


	//Sempre que finalizarmos a manipulaçao do arquivo, devemos fechá-lo.
	fclose(arq);

	return 0;
}
