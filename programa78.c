#include <stdio.h>

#define TamPilha 10

int pilha[TamPilha] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void listaElementos(){
	printf("\n===================== Pilha Atual =====================\n");
	for(int i = 0; i < TamPilha; i++){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){
	int val;
	printf("Informe o valor: ");
	fflush(stdout);
	scanf("%d", &val);
	if(topo < TamPilha){
		pilha[topo] = val;
		topo = topo + 1;
		listaElementos();
	}else{
		printf("A pilha está cheia.\n");
	}
}

void pop(){
	if(topo >= 0){
		pilha[topo-1] = 0;
		topo = topo - 1;
		listaElementos();
	}else{
		printf("A pilha está vazia.\n");
	}
}

void clear(){
	for(int i = 0; i < TamPilha; i++){
		pilha[i] = 0;
	}
	topo = 0;
}

int main(){

	int opcao = 0;

	do{
		printf("Selecione a opção: \n\n");
		printf("[1] - Inserir (push)\n");
		printf("[2] - Remover (pop)\n");
		printf("[3] - Listar\n");
		printf("[4] - Limpar\n");
		printf("[-1] - Sair\n");
		printf("Opção: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			listaElementos();
			break;
		case 4:
			clear();
			break;
		case -1:
			break;
		default:
			printf("Opção inválida!\n");
		}


	}while(opcao != -1);

	return 0;
}
