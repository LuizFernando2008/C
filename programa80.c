#include <stdio.h>
#include <stdlib.h>

struct st_arvore{
	int valor;
	struct st_arvore *sad; // sad -> sub-árvore direita
	struct st_arvore *sae; // sae -> sub-árvore esquerda
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
	return NULL;
}

int arvoreEstaVazia(arvore* t){
	return t == NULL;
}

void mostraArvore(arvore* t){
	printf("<");
	if(!arvoreEstaVazia(t)){
		printf("%d", t -> valor);
		mostraArvore(t->sae);
		mostraArvore(t->sad);
	}
	printf(">");
}

void insereDadosArvore(arvore** t, int num){
	if(*t == NULL){
		*t = (arvore*)malloc(sizeof(arvore));
		(*t)->sae = NULL;
		(*t)->sad = NULL;
		(*t)->valor = num;
	}else{
		if(num < (*t)-> valor){
			insereDadosArvore(&(*t)->sae, num);
		}
		if(num > (*t)->valor){
			insereDadosArvore(&(*t)->sad, num);
		}
	}
}

int estaNaArvore(arvore* t, int num){
	if(arvoreEstaVazia(t)){
		return 0;
	}
	return t->valor==num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}


int main(){

	arvore* t = criaArvore();

	insereDadosArvore(&t, 12);
	insereDadosArvore(&t, 15);
	insereDadosArvore(&t, 10);
	insereDadosArvore(&t, 13);

	mostraArvore(t);

	if(arvoreEstaVazia(t)){
		printf("Árvore vazia!\n");
	}else{
		printf("\nÁrvore não vazia!\n");
	}

	if(estaNaArvore(t, 15)){
		printf("\nO elemento 15 pertence à árvore.\n");
	}else{
		printf("O elemento 15 não pertence à árvore.\n");
	}

	if(estaNaArvore(t, 22)){
		printf("\nO elemento 22 pertence à árvore.\n");
	}else{
		printf("O elemento 22 não pertence à árvore.\n");
	}

	free(t);

	return 0;
}
