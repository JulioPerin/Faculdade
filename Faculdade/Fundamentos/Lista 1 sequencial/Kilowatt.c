int main(void)
{
   float minimo, kilo, valorkilo, valortotal, valordesconto;

   printf("Digite o valor do salario minimo: ");
   scanf("%f", &minimo);
   printf("Digite a quantidade em kilowatts gastos pela residencia : ");
   scanf("%f", &kilo);

   valorkilo = ((minimo * 14.28) / 100) / 100;
   printf("\nValor quilowatt = %.2f", ((minimo * 14.28) / 100) / 100);

   printf("\nValor total = %.2f", kilo * valorkilo);


   printf("\nValor com desconto = %.2f", (kilo * valorkilo) * 0.9);

   return 0;
}
