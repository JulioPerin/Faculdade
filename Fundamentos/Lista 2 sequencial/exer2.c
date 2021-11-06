/* 2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com
 a percentagem do distribuidor e a percentagem dos impostos (ambas aplicadas
 sobre o custo de fábrica). Escrever um programa para, a partir do custo de
 fábrica do carro, calcular e mostrar o custo ao consumidor. */

 #include <stdio.h>

 int main(void)
 {
     float valor, dist, imp, total;

     printf("Informe o custo de fabrica de um automovel: ");
     scanf("%f", &valor);
     printf("Informe a porcentagem do distribuidor: ");
     scanf("%f", &dist);
     printf("informe a porcentagem de impostos: ");
     scanf("%f", &imp);

     total = valor + (valor * (dist /100)) + (valor * (imp / 100));
     printf("O custo total do veiculo ao consumidor: %.2f", total);

     return 0;



 }
