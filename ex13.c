#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i, quantos, num, maior , menor, repetir=0 ;
	printf("quantos números vc quer usar amigo? ");
	scanf_s("%d", &i);
	do{
		maior = -2147483648, menor = 2147483648;
		for (i = i; i >=quantos; i++)
		{
			printf("fala um número");
			scanf_s("%d", &num);
			if (num < menor)
			{
				menor = num;
			}
			if (num > maior)
			{
				maior = num;
			}
		}

		printf("O maior número é %d e o menor é %d.", maior, menor);
		printf("quer continuar?? (sim-1, não-0");
		scanf_s("%d", &repetir);
		
	} while (repetir != 0);
	
	
	return 0;
}