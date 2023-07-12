// Tipos de dados - Tipos alfanuméricos
#include <stdio.h>

int main(){

	char opcao;

	printf("Informe uma opção: \n");
	printf("a - Saldo da conta.\n");
	printf("b - Extrato da conta.\n");
	printf("c - Limite da conta.\n");
	printf("Opção: ");
	fflush(stdout);
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("Seu saldo é...\n\n");
	}else if (opcao == 'b'){
		printf("Extrato da conta...\n\n");
	}else if(opcao == 'c'){
		printf("Seu limite é...\n\n");
	}else{
		printf("Opção inválida!\n\n");
	}

	// Gerar o alfabeto com um loop
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	for(int i = 65; i <= 90; i++){
			printf("%c\n", i);
		}


	return 0;
}
