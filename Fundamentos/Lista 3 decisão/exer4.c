
#include <stdio.h>

void main()
{
	int ano;

	printf("Digite o ano: ");
	scanf("%d", &ano);

	if (ano % 4 == 0)
    {
        if ((ano % 400 == 0) && (ano % 100 != 0))
        {
            printf("\nEh um ano bissexto\n");
        }
        else if ((ano % 400 != 0) && (ano % 100 == 0))
        {
            printf("\nNao eh bissexto\n");
        }
        else
        {
            printf("\nEh um ano bissexto\n");
        }
    }
    else
        {
            printf("\nNao eh bissexto\n");
        }
return 0;
}
