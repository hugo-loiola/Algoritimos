#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int *vetor_dinamico;
  vetor_dinamico = (int *)calloc(10000, sizeof(int));

  if (vetor_dinamico == NULL)
  {
    printf("memoria insuficiente!\n");
    system("pause");
    exit(1);
  }

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &vetor_dinamico[i]);
  }
  // Aumentar o tamanho do vetor para 10
  vetor_dinamico = (int *)realloc(vetor_dinamico, 10 * sizeof(int));
  for (int i = 5; i < 10; i++)
  {
    scanf("%d", &vetor_dinamico[i]);
  }

  // Mostrar o vetor completo
  for (int i = 0; i < 10; i++)
  {
    printf("Vetor Din�mico [%d]: %d\n", i, vetor_dinamico[i]);
  }

  return 0;
}
