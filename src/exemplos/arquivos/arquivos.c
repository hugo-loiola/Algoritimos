#include <stdio.h>

int main()
{
  FILE *p;

  p = fopen("arquiv.txt", "a");

  if (p == NULL)
  {
    printf("erro ao abrir o arquivo!!!\n");
    return 1;
  }

  fputs("12345\n", p);
  fputs("56789\n", p);

  fclose(p);

  return 0;
}