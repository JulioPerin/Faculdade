//Inversão de variaveis

#include <stdio.h>

int main(void)
    {
       int a, b, aux;
       printf("Informe 'a': ");
       scanf("%d", &a);
       printf("Informe 'b': ");
       scanf("%d", &b);
       printf("a=%d b=%d", a, b);

       aux = a;
       a = b;
       b = aux;
       printf(" ---> ");

       printf("a=%d b=%d\n", a, b);

       return 0;
   }
