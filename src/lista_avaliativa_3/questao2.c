#include <math.h>
#include <stdio.h>

int main()
{
  int mes, tempo;
  double aporte, juros, montante, total = 0;
  // Quantidade de meses
  scanf("%d", &mes);
  // Investimento mensal
  scanf("%lf", &aporte);
  // Taxa de juros
  scanf("%lf", &juros);
  // Transformar o juros em inteiro
  juros += 1;

  for (int i = 0; i < mes; i++)
  {
    tempo = i + 1;
    montante = aporte * pow(juros, tempo);
    total += montante;
    printf("Montante ao fim do mes %d: R$ %.2lf\n", i + 1, total);
  }

  return 0;
}