#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");
  // Alocação estática de uma string
  char string_estatica[10];
  strcpy(string_estatica, "hello");
  printf("String Estática: %s\n", string_estatica);

  // Alocação dinâmica de uma string
  char *string_dinamica;
  string_dinamica = (char *)malloc(10);
  strcpy(string_dinamica, "hello 2");
  printf("String Dinâmica: %s\n", string_dinamica);

  // Alocação estática com vetor de int
  int vetor_estatico[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &vetor_estatico[i]);
    printf("Vetor Estático: %d\n", vetor_estatico[i]);
  }

  // Alocação dinâmica com vetor de int
  int *vetor_dinamico;
  vetor_dinamico = (int *)malloc(5 * sizeof(int)); // 5 x 4 que é o tamanho de int

  if (vetor_dinamico == NULL)
  {
    printf("memoria insuficiente!\n");
    system("pause");
    exit(1);
  }

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &vetor_dinamico[i]);
    printf("Vetor Dinâmico: %d\n", vetor_dinamico[i]);
  }

  // Calloc
  int *vetor_dinamico2;
  vetor_dinamico2 = (int *)calloc(5, sizeof(int)); // 5 x 4 que é o tamanho de int

  if (vetor_dinamico2 == NULL)
  {
    printf("memoria insuficiente!\n");
    system("pause");
    exit(1);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Vetor Dinâmico com Calloc: %d\n", vetor_dinamico2[i]);
  }
  return 0;
}