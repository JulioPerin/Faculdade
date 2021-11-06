/*1) Ler um texto com até 100 caracteres. Se o primeiro caractere for 'a' imprimir esse texto, caso contrário contar quantos caracteres 'o' o texto possui.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        int cont=0, i=0;
        char txt[101];

        printf("Informe um texto com ate 100 caracteres: ");
        gets(txt);

        while(txt[i] != '\0')
        {
            if(txt[0] == 'a')
            {
                puts(txt);
                break;
            }
            if(txt[i] == 'o')
            {
                cont++;
            }
            i++;
        }

        if(cont>0)
        {
            printf("O texto: ");
            puts(txt);
            printf(" possui %d caracteres 'O' ", cont);
        }









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
