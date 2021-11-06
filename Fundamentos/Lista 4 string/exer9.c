/*9) Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.*/

#include <stdio.h>
#include <string.h>

int inversora(char txt[])
{
    int tamanho, i, j=0, k;

        tamanho = strlen(txt);//calcula tamanho da string

    int txt2[tamanho];

        printf("Inverso da palavra: ");
        for(i=tamanho; i>=0; i--)
        {
            //printf("%c" ,txt[i]);
            txt2[j] = txt[i-1];
            j++;
        }

        for(i=0; i<tamanho; i++)
        {
            printf("%c" ,txt2[i]);
        }
        k = strcmp(txt2, txt);

        printf("\n%d", k);

        if(k==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }



}
int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[48] ;
        int tamanho, i=0, p;

        printf("Informe uma palavra: ");
        setbuf(stdin, NULL);
        gets(txt);

    p = inversora(txt);

    if(p==1)
    {
        printf("\nSao palindromos");
    }
    else
    {
        printf("\nNao sao palindromos");
    }










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
