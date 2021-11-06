/*
2) Apresentar os múltiplos de 5, entre 5 e 50 separados por tabulação.
*/

#include <stdio.h>

int main(void)
{
  int cont;

  for(cont = 5; cont <= 50; cont++)
  {
     if(cont % 5 == 0)
    {
        printf("\n%d", cont);
    }
 }
 return 0;
}
