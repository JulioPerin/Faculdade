/*
1) Apresentar a tabuada de um n�mero informado pelo usu�rio.
*/

#include <stdio.h>

int main(void)
{
    int cont, num;

    printf("Informe um numero para ver sua tabuada: ");
    scanf("%d", &num);

    for(cont = 0; cont <= 10; cont++)
    {
        printf("\n%d x %d = %d ", num, cont, num * cont);
    }

    return 0;
}
