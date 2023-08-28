#include <stdio.h>

int main()
{
  int A, B, C, D, DIFERENCA;

  scanf("%d\n", &A); // Inserir os 4 números
  scanf("%d\n", &B);
  scanf("%d\n", &C);
  scanf("%d", &D);

  DIFERENCA = (A * B - C * D); // Calcular a diferença

  printf("DIFERENCA = %d\n", DIFERENCA);

  return 0;
}