/*
6) Apresentar os n primeiros n�meros pares e divis�veis por 3
informados pelo usu�rio (validar para que n seja diferente de 0).
Se o usu�rio informar um n�mero negativo transform�-lo em positivo
(sem usar fun��es prontas) antes de utilizar.
Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os
quatro primeiros n�meros pares que s�o divis�veis por tr�s: 0, 6, 12 e 18.
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
