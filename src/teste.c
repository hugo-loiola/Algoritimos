#include <stdio.h>

int main()
{
  double matriz[2][2];

  for (int linha = 0; linha < 3; linha++)
  {
    for (int coluna = 0; coluna < 3; coluna++)
    {
      scanf("%lf\n", &matriz[linha][coluna]);
    }
  }

  return 0;
}