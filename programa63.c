#include <stdio.h>
#include <ctype.h>

int main(){

	char teste = 'H';

	if(isalnum(teste)){
		printf("É alfanumérico.\n");
	}else{
		printf("Não é alfanumérico.\n");
	}

	if(isalpha(teste)){
		printf("É alfabétco.\n");
	}else{
		printf("Não é alfabético.\n");
	}

	if(isdigit(teste)){
		printf("É digito.\n");
	}else{
		printf("Não é digito.\n");
	}

	if(islower(teste)){
		printf("É minúsculo.\n");
	}else{
		printf("Não é minúsculo.\n");
	}

	if(ispunct(teste)){
		printf("É pontuação.\n");
	}else{
		printf("Não é pontuação.\n");
	}

	if(isspace(teste)){
		printf("É espaço.\n");
	}else{
		printf("Não é espaço.\n");
	}

	if(isupper(teste)){
		printf("É maiúsculo.\n");
	}else{
		printf("Não é maiúsculo.\n");
	}

	printf("A letra %c em maiúsculo é %c.\n", teste, toupper(teste));
	printf("A letra %c em minúsculo é %c.\n", teste, tolower(teste));

	return 0;
}
