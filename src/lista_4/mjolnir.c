#include <stdio.h>
#include <string.h>

int main()
{
  int numEntradas, forca;
  char nome[50];

  scanf("%d", &numEntradas);

  for (int repeticoes = 0; repeticoes < numEntradas; repeticoes++)
  {
    scanf("%s", nome);
    scanf("%d", &forca);
    if (strcmp(nome, "Thor") == 0)
    {
      printf("Y\n");
    }
    else
    {
      printf("N\n");
    }
  }

  return 0;
}