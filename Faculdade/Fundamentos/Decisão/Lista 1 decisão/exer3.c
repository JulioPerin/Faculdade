/* Elaborar um programa que leia um caractere.
Se o caractere informado for �F� ou �f� mostrar
 a mensagem �pessoa f�sica�, se informado �J� ou
  �j� mostrar a mensagem �pessoa jur�dica� ou mostrar
  "caractere inv�lido" para qualquer outro caractere */

  #include <stdio.h>

  int main(void)
  {
      char pessoa;

      printf("Informe o tipo de pessoa: ");
      scanf("%c", &pessoa);

      if(pessoa == 'f' || pessoa == 'F')
      {
          printf("\nPessoa fisica");
      }
      if(pessoa == 'j' || pessoa == 'J')
      {
          printf("\nPessoa juridica");
      }
      else
      {
          printf("Caractere invalido");
      }
      return 0;
  }
