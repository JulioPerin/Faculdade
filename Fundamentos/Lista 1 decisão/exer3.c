/* Elaborar um programa que leia um caractere.
Se o caractere informado for ‘F’ ou ‘f’ mostrar
 a mensagem “pessoa física”, se informado ‘J’ ou
  ‘j’ mostrar a mensagem “pessoa jurídica” ou mostrar
  "caractere inválido" para qualquer outro caractere */

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
