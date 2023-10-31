#include <stdio.h>

int main()
{
  int v[3] = {1, 2, 3};
  // v é um ponteiro

  // v aponta para o endereço de memoria do primeiro valor do vetor
  printf("valor apontado por v na primeira posicao: %d\n", v[0]);
  printf("endereco de memoria apontado por v: %p\n", v);
  printf("endereco de memoria apontado por v + 1: %p\n", v + 1);
  printf("endereco de memoria apontado por v - 1: %p\n", v - 1);

  return 0;
}