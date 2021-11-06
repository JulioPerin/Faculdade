/*Ler uma string e copiá-la para outra string sem os possíveis espaços em branco no início e no final. Também devem ser eliminados dois ou mais espaços sucessivos entre as palavras.*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151] ;
        int i=0;

        printf("Informe um Texto: ");
        setbuf(stdin, NULL);
        gets(txt);


         while(txt[i] != '\0')
        {
            if(txt[i] != ' ' && txt[i] != '\0')
            {
                printf("%c", txt[i]);
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
