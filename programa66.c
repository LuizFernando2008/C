#include <stdio.h>
#include <string.h>

// strchr();

int main(){

	char str1[] = "pedro@gmail.com";
	char car = '@';
	char *ret =strchr(str1, car);

	printf("A partir do caractére %c está a string %s.\n", car, ret);

	return 0;
}
