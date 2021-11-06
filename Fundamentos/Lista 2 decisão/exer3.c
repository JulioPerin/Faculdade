/* Ler três valores inteiros diferentes e colocá-los em ordem crescente */
#include <stdio.h>

  int main(void)
  {
    int a, b, c;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

   if(a > b && a > c)
   {
       if(b < a && b > c)
       {
           printf("Menor: %d Meio: %d Maior: %d\n", c, b, a);
       }
       if(c < a && c > b)
       {

           printf("Menor: %d Meio: %d Maior: %d\n", b, c, a);
       }
   }
   if(b > a && b > c)
   {
       if(a < b && a > c)
       {
          printf("Menor: %d Meio: %d Maior: %d\n", c, a, b);
       }
       if(c < b && c > a)
       {
         printf("Menor: %d Meio: %d Maior: %d\n", a, c, b);
       }
   }

   if(c > b && c > a)
   {
       if(a < c && a > b)
       {
          printf("Menor: %d Meio: %d Maior: %d\n", b, a, c);
       }
       if(b < c && b > a)
       {
         printf("Menor:%d Meio:%d Maior:%d\n", a, b, c);
       }
   }
return 0;
  }

