#include <stdio.h>

int main()
{
  int N1, N2;
  int somaImpares = 0;

  scanf("%d\n", &N1);
  scanf("%d", &N2);

  // Garante que X seja menor que Y
  if (N1 > N2)
  {
    int temp = N1;
    N1 = N2;
    N2 = temp;
  }

  // Calcula a soma dos números ímpares entre X e Y
  for (int i = N1 + 1; i < N2; i++)
  {
    if (i % 2 != 0)
    {
      somaImpares += i;
    }
  }

  printf("%d\n", somaImpares);

  return 0;
}