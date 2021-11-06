/*
6) Apresentar os n primeiros números pares e divisíveis por 3
informados pelo usuário (validar para que n seja diferente de 0).
Se o usuário informar um número negativo transformá-lo em positivo
(sem usar funções prontas) antes de utilizar.
Por exemplo, se o usuário informar 4, o programa deverá mostrar os
quatro primeiros números pares que são divisíveis por três: 0, 6, 12 e 18.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int num, cont, i;

    do//repetir programa
    {
        do
        {
            printf("Informe a quantidade de pares divisiveis por 3: ");
            scanf("%d", &num);
        }while(num == 0);

        if(num<0)
        {
            num = num * -1;
        }

        i=0;
        cont=0;
        do
        {
            if(i%3 == 0 && i%4 == 0)
            {
                printf(" %d \t", i);
                cont++;
            }
            i++;

        }while(cont < num);










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
