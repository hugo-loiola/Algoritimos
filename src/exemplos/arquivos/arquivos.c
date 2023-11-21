#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");
  FILE *p;
  char linha[30];

  p = fopen("arquiv.txt", "r");

  if (p == NULL)
  {
    printf("erro ao abrir o arquivo!!!\n");
    return 1;
  }
  while (fgets(linha, 20, p))
  {
    printf("%s", linha);
  }

  fclose(p);

  return 0;
}