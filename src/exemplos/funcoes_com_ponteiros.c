#include <stdio.h>

void multiplicarValorPor2(int *valor)
{
  printf("endereco de memoria de 'valor': %p\n", valor);
  *valor = *valor * 2;
}

int main()
{
  int a = 10;

  printf("valor de a: %d\n", a);
  printf("endereco de memoria de 'a': %p\n", &a);
  multiplicarValorPor2(&a);
  printf("valor de a: %d\n", a);
  return 0;
}