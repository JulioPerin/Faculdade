/*
2) Apresentar os m�ltiplos de 5, entre 5 e 50 separados por tabula��o.
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
