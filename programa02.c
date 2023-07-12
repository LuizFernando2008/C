// Estruturas de decisão
# include <stdio.h>

int main(){

	int idade;
	printf("Digite a sua idade: ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("Você é menor de idade.");
	} else if(idade >= 18 && idade < 60){
		printf("Você é adulto.");
	} else{
		printf("Você é idoso.");
	}


	return 0;
}
