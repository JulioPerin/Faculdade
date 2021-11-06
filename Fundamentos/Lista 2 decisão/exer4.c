/*4) Ler o gênero (F ou f para feminino, M ou m para masculino.
Para qualquer outro caractere informar que é inválido e finalizar
 o programa). Se informado um caractere válido, ler a altura da pessoa
  e calcular e mostrar o seu peso ideal */

  #include <stdio.h>

  int main(void)
  {
      char gen;
      float altura;

      printf("Informe o seu genero (usando as inicias): ");
      scanf("%c", &gen);

      if(gen == 'f' || gen == 'F')
      {
          printf("Informe sua altura: ");
          scanf("%f", &altura);
          printf("Seu peso ideal eh= %.2f", (62.1 * altura) - 44.7);
      }
      else if(gen == 'm' || gen == 'M')
      {
          printf("Informe sua altura: ");
          scanf("%f", &altura);
          printf("Seu peso ideal eh= %.2f", (72.7 * altura) - 58);
      }
      else
      {
          printf("Caracter invalido");
      }
      return 0;
  }
