/*6) Ler um texto e imprimir o texto na vertical com uma palavra por linha.
*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151] ;
        int tamanho, i=0;

        printf("Informe uma frase de ate 150 caracteres: ");
        setbuf(stdin, NULL);
        gets(txt);


        printf("===Texto na vertical===\n");

         while(txt[i] != '\0')
        {
            printf("%c" ,txt[i]);
            if(txt[i] == ' ')
            {
                printf("\n");
            }
            i++;
        }













        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
