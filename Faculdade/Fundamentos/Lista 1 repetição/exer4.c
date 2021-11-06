/*
4) Apresentar os números entre 10 e 0, ou seja, em ordem decrescente, separados por tabulação.
*/


#include <stdio.h>

int main(void)
{
  int cont;

   for(cont = 10; cont >= 0; cont--)
  {
    printf("\n%d ", cont);
  }

  return 0;
}
