#include <stdio.h>

int main()
{
  int conjunto[10];
  int novoConjunto[10];
  int tamanho = 10;

  // Leitura dos valores de entrada
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &conjunto[i]);
  }

  // Imprimir o conjunto original
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d", conjunto[i]);
    if (i < tamanho - 1)
    {
      printf(" ");
    }
  }
  printf("\n");

  while (tamanho > 1)
  {
    int novoTamanho = 0;

    // Criar um novo conjunto com menos 1
    for (int i = 0; i < tamanho - 1; i++)
    {
      int soma = conjunto[i] + conjunto[i + 1];
      novoConjunto[novoTamanho] = soma;
      novoTamanho++;
    }

    // Imprimir o novo conjunto
    for (int i = 0; i < novoTamanho; i++)
    {
      printf("%d", novoConjunto[i]);
      if (i < novoTamanho - 1)
      {
        printf(" ");
      }
    }
    printf("\n");

    for (int i = 0; i < novoTamanho; i++)
    {
      conjunto[i] = novoConjunto[i];
    }

    tamanho = novoTamanho;
  }

  return 0;
}
