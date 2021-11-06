
#include <stdio.h>

 int main(void)

 {
     float id1, id2, id3;

     printf("|Informe idade 1: ");
     scanf("%f", &id1);
     printf("|Informe idade 2: ");
     scanf("%f", &id2);
     printf("|Informe idade 3: ");
     scanf("%f", &id3);

     printf("Idade total %c: %.1f", 130, ((id1 + id2 + id3) / 3));

     return 0;
 }

