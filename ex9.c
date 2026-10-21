#include <stdio.h> ​
#include <locale.h> ​
int main(void)​
{
    setlocale(LC_ALL, "");
    int n;
        do 
        {

            printf("diz um número\n");
            scanf_s("%d", &n);
            if (n < 0)
            {
                printf("o número é negativo\n");
            }
            else if(n>0)
            {
                printf("O número é positivo\n");
            }

        } while (n != 0);
        printf("digitou 0 fih, RALA");
    return 0;
}
