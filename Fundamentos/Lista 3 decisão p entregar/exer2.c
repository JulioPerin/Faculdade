/*A função toupper() transforma um caractere para maiúsculo.
Para usar esta função é necessário incluir no cabeçalho a
 biblioteca ctype.h. Veja o exemplo a seguir: */

#include <stdio.h>
#include<ctype.h>

int main(void)
{

    char letra, letraM, alfab;

    printf("\nDigite uma letra\: ");
    scanf("%c",&letra);

    letraM = toupper(letra);
    alfab = isalpha(letra);

    if (alfab)
    {
        printf("==Pertence ao Alfabeto==\n");
        switch (letra)
        {
            case 'a':
                printf("%c -> VOGAL \n",letraM);
                break;
            case 'e':
                printf("%c -> VOGAL \n",letraM);
                break;
            case 'i':
                printf("%c -> VOGAL \n",letraM);
                break;
            case 'o':
                printf("%c -> VOGAL \n",letraM);
                break;
            case 'u':
                printf("%c -> VOGAL \n",letraM);
                break;
            default:
                printf("\n %c -> CONSOANTE \n",letraM);
                break;
        }
    }
    else
    {
        printf("\nCaractere nao pertence ao Alfabeto\n");
    }


    return 0;
}
