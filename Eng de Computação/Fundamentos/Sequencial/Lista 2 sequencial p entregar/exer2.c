/* Elabore um programa que leia via teclado uma quantidade de segundos
 (tipo int) e transforme este tempo em dias, horas e minutos (as três últimas em tipo float).
 */

 #include <stdio.h>

 int main(void)
 {
     int segundos;

    printf("informe o tempo em segundos: ");
    scanf("%d", &segundos);

    printf("\nTempo em minutos: %.1f", (float)segundos / 60);
    printf("\nTempo em horas: %.1f", (float)segundos / 3600 );
    printf("\nTempo em dias: %.1f", (float)segundos / 86400 );

    return 0;

 }
