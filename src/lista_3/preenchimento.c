#include <stdio.h>

int main()
{
  int vetor[10], valor;

  scanf("%d", &valor);

  vetor[0] = valor;

  for (int i = 1; i < 10; i++)
  {
    vetor[i] = vetor[i - 1] * 2;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("N[%d] = %d\n", i, vetor[i]);
  }

  return 0;
}
