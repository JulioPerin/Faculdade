/*
3) Em um intervalo de 0 a 100, apresentar:
a) Os n�meros divis�veis por 3.
b) O quadrado dos n�meros divis�veis por 3.
c) Os n�meros divis�veis por 5 ou por 7.
d) A raiz quadrada dos n�meros divis�veis por 5 ou por 7.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    float raiz;

    printf("===NUMEROS DIVISIVEIS POR 3===\n");
    for(i=0; i<=100; i++)
    {
        if(i%3 == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n===QUADRADO DOS DIVISIVEIS POR 3===\n");
   for(i=0; i<=100; i++)
   {
       if(i%3 == 0)
       {
           printf("%d\t", i*i);
       }

   }

   printf("\n===DIVISIVEL POR 5 OU POR 7===\n");
   for(i=0; i<=100; i++)
   {
       if(i%5 == 0 || i%7 == 0)
       {
           printf("%d\t", i);
       }
   }

    printf("\n===RAIZ QUADRADO DOS DIVISIVEIS POR 5 OU POR 7===\n");
   for(i=0; i<=100; i++)
   {
       if(i%5 == 0 || i%7 == 0)
       {
           raiz = sqrt(i);
           printf("%.2f\t", raiz);
       }
   }
   return 0;
}



