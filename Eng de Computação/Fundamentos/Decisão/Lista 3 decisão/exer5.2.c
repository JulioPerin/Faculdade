/* 5.1) A figura a seguir apresenta um exemplo fict�cio de �rvore de decis�o,
tomando atributos de clientes de uma institui��o financeira.
 Elabore um programa que implemente essa �rvore de decis�o.
 As entradas podem ser do tipo char, portanto, considere a
 primeira letra de cada palavra como entrada. Caso o usu�rio     setbuf(stdin, NULL);
 informe um caractere diferente dos aceit�veis, apresente a
 mensagem "Caractere inv�lido". */

#include <stdio.h>

int main(void)
{
    char resp, resp3, resp4, resp5, resp6, resp7, resp8, resp9;
    int resp2;

    printf("\nResponda com A para algumas, P para poucas e C para cheio\n");
    printf("\nQuantas pessoas estao no restaurante? \n");
    scanf("%c", &resp);

     if(resp == 'A' || resp == 'a')
    {
        printf("\nPode entrar no estabelecimento\n");
    }
    else if(resp == 'P' || resp == 'p')
    {
        printf("\nPode entrar no estabelecimento\n");
    }
     else if(resp == 'C' || resp == 'c')
    {
        printf("\Qual eh o tempo de espera para entrar(em minutos)?\n");
        setbuf(stdin, NULL);
        scanf("%d", &resp2);

        if(resp2 >= 0 && resp2 <=10)
        {
           printf("\nEspere liberar uma mesa\n");
        }
        else if(resp2 > 60)
        {
           printf("\nNao espere\n");
        }
        else if(resp2 >= 30 && resp2 <=60)
        {
            printf("\nResponda com S para sim e N para nao\n");
            printf("\nHa um restaurante alternativo na redondeza?\n");
            setbuf(stdin, NULL);
            scanf("%c", &resp3);

                if(resp3 == 'S' || resp3 == 's')
                {
                    printf("\nResponda com S para sim e N para nao\n");
                    printf("\nEh sexta ou sabado?\n");
                    setbuf(stdin, NULL);
                    scanf("%c", &resp4);

                        if(resp4 == 'S' || resp4 == 's')
                        {
                            printf("\nNao espere?\n");
                        }
                        else if(resp4 == 'n' || resp4 == 'N')
                        {
                            printf("\nEspere liberar uma mesa?\n");
                        }
                        else
                        {
                        printf("\nOpcao invalida\n");
                        }
                }
                else if(resp3 == 'n' || resp3 == 'N')
                {
                    printf("\nResponda com S para sim e N para nao\n");
                    printf("\nFoi feito uma reserva?\n");
                    setbuf(stdin, NULL);
                    scanf("%c", &resp5);

                        if(resp5 == 'S' || resp5 == 's')
                        {
                            printf("\nEspere liberar uma mesa\n");
                        }
                        else if(resp5 == 'n' || resp5 == 'N')
                        {
                            printf("\nResponda com S para sim e N para nao\n");
                            printf("\nExiste um bar confort�vel onde possa se esperar?\n");
                            setbuf(stdin, NULL);
                            scanf("%c", &resp6);

                             if(resp6 == 'S' || resp6 == 's')
                             {
                                printf("\nVa para essa bar para aguardar\n");
                             }
                             else if(resp6 == 'N' || resp6 == 'n')
                             {
                                 printf("\nVa para casa\n");
                             }
                            else
                            {
                            printf("\nOpcao invalida\n");
                            }
                        }
                    else
                    {
                        printf("\nOpcao invalida\n");
                    }
                   }
                else
                {
                    printf("\nOpcao invalida\n");
                }
        }
            else if(resp2 >= 10 && resp2 <=30)
        {
                printf("\nResponda com S para sim e N para nao\n");
                printf("\nEsta faminto?\n");
                setbuf(stdin, NULL);
                scanf("%c", &resp7);

                if(resp7 == 'n' || resp7 == 'N')
                    {
                        printf("\nEntao espere\n");
                    }
                else if(resp7 == 'S' || resp7 == 's')
                    {
                            printf("\nResponda com S para sim e N para nao\n");
                            printf("\nExiste um restaurante alternativo nas redondezas?\n");
                            setbuf(stdin, NULL);
                            scanf("%c", &resp8);

                            if(resp8 == 'n' || resp8 == 'N')
                            {
                                printf("\nEntao espere\n");
                            }
                            else if(resp8 == 'S' || resp8 == 's')
                            {
                            printf("\nResponda com S para sim e N para nao\n");
                            printf("\nEsta chovendo?\n");
                            setbuf(stdin, NULL);
                            scanf("%c", &resp9);

                                if(resp9 == 's' || resp9 == 'S')
                                {
                                    printf("\nEntao espere\n");
                                }
                                else if(resp9 == 'n' || resp9 == 'n')
                                {
                                    printf("\nEntao va para casa\n");
                                }
                                else
                                {
                                    printf("\nOpcao invalida\n");
                                }
                            }
                            else
                            {
                                printf("\nOpcao invalida\n");
                            }
                    }
                }
                else
                {
                    printf("\nOpcao invalida\n");
                }
            }
    else
    {
        printf("\nOpcao invalida\n");
    }
return 0;
}

