/*
4) Leia dois valores que representam os limites de um intervalo.
O usu�rio pode informar os valores em ordem crescente ou decrescente.
Validar para que o programa n�o aceite valores iguais para os limites do
intervalo. Mostre os divis�veis por x e n�o divis�veis por y nesse intervalo.
x e y s�o vari�veis informadas pelo usu�rio.
*/

#include <stdio.h>

int main(void)
{
    int superior, inferior, i, num;
    int x, y;
    char opcao;

    do // repetir o programa//
    {

    printf("informe o limite superior: ");
    scanf("%d", &superior);
    printf("informe o limite inferior: ");
    scanf("%d", &inferior);
    printf("Mostrar valores divisiveis por: ");
    scanf("%d", &x);
    printf("Mostrar valores nao divisiveis por: ");
    scanf("%d", &y);

    for(i = inferior; i <= superior; i++)
    {
        num = i;
        if(i < 0)
        {
            num = num * -1;
        }
        if(num%x == 0 && num%y != 0)
        {
            if(i < 0)
            {
               num = num * -1;
               printf(" %d ", num);
            }
            else
            {
                printf(" %d ", num);
            }
        }
    }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

