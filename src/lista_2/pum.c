#include <stdio.h>

int main()
{
  int linhas;
  int N1 = 1;
  int N2 = 2;
  int N3 = 3;

  scanf("%d", &linhas);

  for (int i = 0; i < linhas; i++)
  {

    printf("%d %d %d PUM\n", N1, N2, N3);

    N1 = N1 + 4;
    N2 = N2 + 4;
    N3 = N3 + 4;
  }

  return 0;
}