// Estruturas de decis�o
# include <stdio.h>

int main(){

	int idade;
	printf("Digite a sua idade: ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("Voc� � menor de idade.");
	} else if(idade >= 18 && idade < 60){
		printf("Voc� � adulto.");
	} else{
		printf("Voc� � idoso.");
	}


	return 0;
}
