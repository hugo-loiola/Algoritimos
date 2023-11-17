#include <stdio.h>
int main()
{
  FILE *fp;
  char string[100];
  int i;
  fp = fopen("teste.txt", "a");
  if (!fp)
  {
    printf("Erro na abertura do arquivo");
    exit(1);
  }
  printf("Entre com a string a ser gravada no arquivo: ");
  fgets(string, 100, stdin);
  for (i = 0; string[i]; i++)
    putc(string[i], fp);
  fclose(fp);
  return 0;
}