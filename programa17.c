// Escrevendo funções
#include <stdio.h>

// Estrutura das funções
/*
  - Tipo de retorno
  - Nome
  - Parâmetros de entrada (opicional)
  - Implementação
  - Retorno (opicional)
 */

	void mensagem(){
		printf("Bem-vindo!");
	}

	int soma(int num1, int num2){
		int res = num1 + num2;
		return res;
	}

	void proximoChar(char caractere){
		printf("%c", caractere+1);
	}

int main(){

	printf("Olá...");

	return 0;
}
