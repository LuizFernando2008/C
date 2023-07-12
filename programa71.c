#include <stdio.h>
#include <time.h>

// localtime()

int main(){

	time_t tempoBruto;
	struct tm *info;

	time(&tempoBruto);

	info = localtime(&tempoBruto);
	printf("Data e hora local %s\n", asctime(info));

	return 0;
}
