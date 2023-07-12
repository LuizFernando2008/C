// Tipos de dados - Tipos numéricos
#include <stdio.h>

int main(){

	float media, nota1, nota2;

	printf("Digite a primeira nota: ");
	fflush(stdout);
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	fflush(stdout);
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua média é %.2f", media);

	return 0;
}
