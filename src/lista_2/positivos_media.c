#include <stdio.h>

int main()
{
  float valor;
  int positivos = 0;
  float somaPositivo = 0;

  for (int i = 0; i < 6; i++)
  {
    scanf("%f", &valor);
    if (valor > 0)
    {
      positivos++;
      somaPositivo = somaPositivo + valor;
      valor = 0;
    }
  }

  printf("%d valores positivos\n", positivos);
  printf("%.1f\n", somaPositivo / positivos);

  return 0;
}