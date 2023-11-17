#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");
  printf("Olá, Bom Dia!\n");

  return 0;
}