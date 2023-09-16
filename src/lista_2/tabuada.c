#include <stdio.h>

int main()
{
  int n, resultado;

  do
  {
    scanf("%d", &n);
  } while (n < 2 || n > 1000);

  for (int i = 1; i <= 10; i++)
  {
    resultado = i * n;
    printf("%d x %d = %d\n", i, n, resultado);
  }

  return 0;
}