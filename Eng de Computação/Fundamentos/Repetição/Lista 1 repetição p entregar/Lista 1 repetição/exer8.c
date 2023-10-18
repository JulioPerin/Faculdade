/* 8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo,
 igual a 0 ou idade negativa. Se a idade for igual a 0 ou negativa, não ler as informações
  de nacionalidade e se possui curso superior, e sair do programa. */

  #include <stdio.h>

  int main(void)
  {
      int idade=1, contBras=0, contestran=0, contBrasSC=0, somaBrasSC=0, primeiro=0, menor=0;
      char nas, sup;
      float media;

      while(idade > 0 && idade < 120)
      {
          printf("\nInforme a idade: ");
          scanf("%d", &idade);

          if(idade != 0 && idade < 120)
          {
              printf("Informe sua nacionalidade (B/b/E/e): ");
              setbuf(stdin,NULL);
              scanf("%c", &nas);

              if(nas=='B' || nas=='b' || nas=='e' || nas=='E')
              {
                    printf("Possui curso superior? (S/s/N/n): ");
                    setbuf(stdin,NULL);
                    scanf("%c", &sup);

                    if(sup=='N' || sup=='n' || sup=='S' || sup=='s')
                    {
                        if(nas=='B' || nas=='b')
                        {
                            contBras++;
                            if(sup=='N' || sup=='n')
                            {
                                contBrasSC++;
                                somaBrasSC = somaBrasSC + idade;
                            }
                        }
                        else
                        {
                            contestran++;
                            if(sup=='S' || sup=='s')
                            {
                                if(primeiro == 0)
                                {
                                    menor = idade;
                                    primeiro = 1;
                                }
                                else
                                {
                                    if(idade < menor)
                                    {
                                        menor = idade;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                       printf("Invalido\n");
                    }
              }
              else
              {
                  printf("Invalido\n");
              }
              printf("\nQuantidade de brasileiros: %d\n", contBras);
              printf("\nQuantidade de estrangeiros: %d\n", contestran);
              if(contBrasSC>0)
              {
                  media = (float)somaBrasSC / contBrasSC;
                  printf("media dos brasileiros sem superior %.2f", media);
              }

              printf("Menor dos estrangeiros com superior: %d\n", menor);


          }
      }
return 0;
  }
