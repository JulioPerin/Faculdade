#include <stdio.h>
#include <string.h>
int tam = 30;

void select(int tam, int qtd, char strng[qtd][tam])
{
     int i, j, x, menor;

    char aux[qtd];

        for(i = 0; i < qtd - 1; i++)
        {
                x = 0;
                menor = i;
                for(j = i + 1; j < qtd; j++)
                {
                    x = 0;
                    while(strng[menor][x] == strng[j][x])
                    {
                            x++;
                    }
                    if(strng[menor][x] > strng[j][x])
                    {
                         menor = j;
                    }
                }
                if(menor != i)
                {
                        strcpy(aux, strng[menor]);
                        strcpy(strng[menor], strng[i]);
                        strcpy(strng[i], aux);
                }
        }
        for(i = 0; i < qtd; i++)
        {
                printf("%s%c", strng[i], 10);
        }
}

int main()
{
    int i, qtd;

    scanf("%d", &qtd);

    char str[qtd][tam];

    for(i = 0; i < qtd; i++)
    {
        scanf("%s", str[i]);
    }

        select(tam, qtd, str);

        return 0;
}
