#include <stdio.h>

int main()
{
  int numero, inteiro = 0;
  scanf("%d", &numero);

  for (int linha = 0; linha < numero; linha++)
  {
    for (int coluna = 0; coluna <= 3; coluna++)
    {
      printf("%d ", inteiro = inteiro + 1);
    }
    printf("PUM\n");
  }

  return 0;
}