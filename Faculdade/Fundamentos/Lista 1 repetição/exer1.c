/*
1) Apresentar todos os n�meros entre 20 e 35 separados por tabula��o.
*/

#include <stdio.h>

int main(void)
{
  int cont;

  for(cont = 20; cont <= 35; cont++)
  {
    printf("\n%d ", cont);
  }

  return 0;
}
