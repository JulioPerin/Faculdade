/* Ler um número inteiro longo (long int) que representa os segundos e convertê-lo para horas,
 minutos e segundos. Mostrar a quantidade de horas, minutos e segundos obtidos,
  no seguinte formato: xhoras:yminutos:zsegundos. */

  #include <stdio.h>

  int main(void)
  {
      float horas, minutos, segundos;
      long segsinput;

      printf("Informe a quantidade de segundos: ");
      scanf("%li", &segsinput);

      horas = segsinput / 3600;
      minutos = (segsinput - (horas * 3600)) / 60;
      segundos = segsinput % 60;

      printf("Horario = %.0f hora(s) %.0f minutos %.0f segundos", horas, minutos, segundos);

      return 0;
  }

