/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    char c;
    int i;

    printf("Use apenas 's' ou 'n' para responder :P\n");
    printf("Voce me ama? ");
    scanf("%c", &c);

    if(c == 's' || c == 'S')
    {
        printf("Awwwnnnn eu te amo também");
    }
    if(c == 'n' || c == 'N')
    {
        printf("Tem certeza?");
        setbuf(stdin, NULL);
        scanf("%c", &c);
        if(c == 'n' || c == 'n')
        {
            printf("Bom mesmo... >:( ");
        }
        if(c == 's' || c == 's')
        {
            printf("Iniciando auto-destruicao em 10\n");

            //sleep(5000);
            for(i=9; i>1; i--)
            {
                printf("%d\n", i);
                sleep(1);
                if(i==2)
                   {
                        printf("Bomba defusada com sucesso, tenha um bom dia\nEu te amo sua chata:)");
                   }
            }
        }
    }

    return 0;
}
