/*
1) Apresente (separados por tabula��o) os n�meros entre 1 e 1000 que s�o divis�veis por 11 e �mpares.
*/

#include <stdio.h>

int main(void)
{
    int i;
    char opcao;

    do // repetir o programa//
    {
        for(i=1; i<1000; i++)
        {
            if(i%2 != 0 && i%11 == 0)
            {
                printf("%d\t", i);
            }
        }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

