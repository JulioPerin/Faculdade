/*Elabore um programa que obtenha por meio do teclado a pontua��o, em valores inteiros,
 de um candidato ao concurso vestibular, nas seguintes �rea: exatas (e), humanas (h) e
 conhecimento geral (cg). A seguir dever� ser definida a m�dia ponderada usando a seguinte
 express�o: mp = ((e * 3) + (h * 2) + cg) / 6. A m�dia ponderada calculada define o rendimento
  do candidato */

  #include <stdio.h>

  int main(void)
  {
        int e, h, cg, mp;

      printf("Informe a sua nota em humanas: ");
      scanf("%d", &h);
      printf("Informe a sua nota em exatas: ");
      scanf("%d", &e);
      printf("Informe a sua nota em conhecimentos gerais: ");
      scanf("%d", &cg);

      mp = ((e * 3) + (h * 2) + cg) / 6;

      if(mp <= 250 && mp > 0)
      {
          printf("\nRendimento insuficiente\n");
      }
      else if(mp <= 500 && mp > 251)
      {
          printf("\nRendimento baixo\n");
      }
      else if(mp <= 700 && mp > 501)
      {
          printf("\nRendimento regular\n");
      }
      else if(mp <= 900 && mp > 701)
      {
          printf("\nRendimento bom\n");
      }
      else if(mp <= 1000 && mp > 901)
      {
          printf("\nRendimento excelente\n");
      }
      else
      {
          printf("\nValores invalidos\n");
      }
      return 0;
  }
