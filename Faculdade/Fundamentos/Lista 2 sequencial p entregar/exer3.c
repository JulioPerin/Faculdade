/* Cada degrau de uma escada tem uma altura X. Fa�a um programa para
 ler essa altura e a altura que o usu�rio deseja alcan�ar subindo a escada.
 Calcule e mostre quantos degraus o usu�rio dever� subir para atingir o seu objetivo. */

 #include <stdio.h>

 int main(void)
 {
     #define altdegrau 0.19

     float altescada, totaldegraus;

     printf("Informe a altura que deseja atingir (em metros): ");
     scanf("%f", &altescada);

     totaldegraus = altescada / altdegrau;
     printf("Sera necessario subir: %.1f degraus", totaldegraus);

     return 0;







 }
