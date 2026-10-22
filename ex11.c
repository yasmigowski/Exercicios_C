#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n, i;
	printf("diz um número pra tabuada");
	scanf_s("%i", &n);
	for (i = 1; i < 11; i++) {

		printf(" %i X %i = %i\n", i, n, i * n);

	}
	return 0;
}