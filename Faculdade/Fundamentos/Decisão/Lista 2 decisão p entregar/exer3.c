/* 3) A figura a seguir representa uma árvore de decisão para identificar
 se um paciente está saudável ou doente. Elabore um programa que implementa essa árvore de decisão. */

#include <stdio.h>

int main(void)
{
    char resp, resp2;
    float temp;

    printf("O paciente se sente bem? (S = sim e  N = nao): ");
    scanf("%c", &resp);

    if(resp == 's' || resp == 'S')
    {
        printf("O paciente esta saudavel");
    }
    else if(resp == 'n' || resp == 'N')
    {
        printf("O paciente sente dor?");
        setbuf(stdin, NULL);
        scanf("%c", &resp2);

        if(resp2 == 's' || resp2 == 'S')
        {
            printf("O paciente esta doente");
        }
        else if(resp2 == 'n' || resp2 == 'N')
        {
            printf("Informe a temperatura do paciente: ");
            scanf("%f", &temp);

            if(temp <= 37)
            {
                printf("O paciente esta saudavel");
            }
            else if(temp > 37)
            {
                printf("O paciente esta doente");
            }
        }
        else
        {
            printf("Caractere invalido\n");
        }
    }
    else
    {
        printf("Caractere invalido\n");
    }

    return 0;
}
