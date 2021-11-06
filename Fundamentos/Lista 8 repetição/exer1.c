/*
1) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do programa seja mostrada como no exemplo a seguir:
*/

#include <stdio.h>

int main(void)
{
    int i, j, fat;
    char opcao;

    do // repetir o programa
    {

        for(i=0; i<=12; i++)
        {
            fat=1;
            printf("%d! => ", i);

            for(j=i; j>=2; j--)
            {
                fat = fat * j;
                printf("%d *", j);
            }
            printf("1 = %d\n", fat);
        }





        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
