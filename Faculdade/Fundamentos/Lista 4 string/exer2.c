/* Elaborar um programa que aceita e valida uma senha com 6 d�gitos num�ricos,
que deve ser armazenada em uma string. O usu�rio tem tr�s tentativas para acertar
a senha, se ultrapassar esse limite, ele deve ser informado. O usu�rio tamb�m deve
ser informado se ele acertou a senha em at� tr�s tentativas */

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        int cont=0, i=0;
        char senhaArmazenada[7]="123456", senha[7];


        do
        {
            printf("Informe a senha: ");
            gets(senha);
            i = strcmp(senhaArmazenada, senha);

            if(i!=0)
            {
                cont++;
                if(cont>=3)
                {
                    printf("\nAcesso negado, senha invalida\n");
                    cont=0;
                    break;
                }
            }
            if(i==0)
            {
                printf("Permissao concedida");
            }

        }while(i!=0);









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
