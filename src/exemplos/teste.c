#include <stdio.h>
#include <string.h>

int main()
{

  int matrizA[4][4] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1};
  int matrizB[4][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
  int resultado[4][4];

  for (int linha = 0; linha < 4; linha++)
  {
    for (int coluna = 0; coluna < 4; coluna++)
    {
      for (int k = 0; k < 4; k++)
      {
        resultado[linha][coluna] = resultado[linha][coluna] + matrizA[linha][k] * matrizB[k][coluna];
      }
    }
  }

  for (int linha = 0; linha < 4; linha++)
  {
    printf("\n");
    for (int coluna = 0; coluna < 4; coluna++)
    {
      printf("%4d", resultado[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}