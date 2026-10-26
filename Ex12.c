#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n;
	do {
		printf("fala um número");
		scanf_s("%d", &n);
		if (n != 0) 
		{
			
		
		 if (n % 3 == 0)
		 {
			printf("é múltiplo de 3\n");
		 }
		 if (n % 5 == 0) {
			printf("é múltiplo de 5");
		 }

	    }
	} while (n != 0);
	return 0;

	

}