#include <stdio.h>
#include <string.h>

// strchr();

int main(){

	char str1[] = "pedro@gmail.com";

	printf("Usuário: %s\n", strtok(str1, "@"));

	return 0;
}
