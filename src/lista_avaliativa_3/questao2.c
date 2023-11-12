#include <math.h>
#include <stdio.h>

int main()
{
  int mes;
  double aporte, juros, montante, total = 0;
  // Quantidade de meses
  scanf("%d", &mes);
  // Investimento mensal
  scanf("%lf", &aporte);
  // Taxa de juros
  scanf("%lf", &juros);
  juros += 1;

  for (int i = 0; i < mes; i++)
  {
    montante = aporte * pow(juros, i + 1);
    total += montante;
    printf("Montante ao fim do mes %d: %.2lf\n", i + 1, total);
  }

  return 0;
}