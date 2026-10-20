#include<locale.h>
#include<stdio.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int cont = 0, soma = 0, i;
	printf("quantos números tu quer somarrr?");
	scanf_s("%d", &cont);
	
	while (cont > 0)
	{

		printf("fala ae");
		scanf_s("%d", &i);
		cont = cont - 1;
		soma = soma + i;

	}
	printf("a soma deu %d", soma);
}