/*
3) Apresentar os números entre 0 e 4, com intervalo de 0.25 entre eles, separados por tabulação.
*/

#include <stdio.h>

int main(void)
{
  float i;

  for(i = 0; i <= 4; i = i+ 0.25)
  {
      printf("\n%0.2f", i);
  }
}
