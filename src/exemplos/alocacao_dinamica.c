#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // Alocação estática de uma string
  char string_estatica[10];
  strcpy(string_estatica, "hello");
  printf("String Estatica: %s\n", string_estatica);

  // Alocação dinâmica de uma string
  char *string_dinamica;
  string_dinamica = (char *)malloc(10);
  strcpy(string_dinamica, "hello 2");
  printf("String Dinamica: %s\n", string_dinamica);
  return 0;
}