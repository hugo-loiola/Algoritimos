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

  return 0;
}