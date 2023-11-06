#include <stdio.h>
#include <string.h>

int main()
{

  int matrizA[4][4];
  int matrizB[4][4];
  int resultado[4][4];

  // Leitura da primeira matriz (A)
  for (int linha = 0; linha < 4; linha++)
  {
    for (int coluna = 0; coluna < 4; coluna++)
    {
      scanf("%d", &matrizA[linha][coluna]);
    }
  }

  // Leitura da segunda matriz (B)
  for (int linha = 0; linha < 4; linha++)
  {
    for (int coluna = 0; coluna < 4; coluna++)
    {
      scanf("%d", &matrizB[linha][coluna]);
    }
  }

  // Leitura da operação a ser realizada
  char operacao[10];
  scanf("%s", operacao);
  // Realizar a operação e preencher a matriz resultado
  if (strcmp(operacao, "soma") == 0)
  {
    for (int linha = 0; linha < 4; linha++)
    {
      for (int coluna = 0; coluna < 4; coluna++)
      {
        resultado[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
      }
    }
  }
  else if (strcmp(operacao, "sub") == 0)
  {
    for (int linha = 0; linha < 4; linha++)
    {
      for (int coluna = 0; coluna < 4; coluna++)
      {
        resultado[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
      }
    }
  }

  else if (strcmp(operacao, "mult") == 0)
  {
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
  }

  // Imprimir a matriz resultante formatada
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
