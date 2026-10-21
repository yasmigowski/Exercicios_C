#include <stdio.h> ​
#include <locale.h> ​
int main(void)
{
	int pao;
		setlocale (LC_ALL, "");
	do
	{
		printf("diz um numero:\n");
		scanf_s("%i", &pao);
		if (pao %2 ==0)
		{
			printf("o numero e par:\n");
		}
		else
		{
			printf("numero e impar:\n");
		}
	} while (pao != 0);
	printf("digitou 0 fih, RALA");
	return 0;
}