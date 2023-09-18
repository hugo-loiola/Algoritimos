#include <stdio.h>

int main()
{
  unsigned int numero;
  int numeroOriginal, remainder, soma = 0;

  scanf("%u", &numero);

  if (numero % 2 == 0)
  {
    printf("%u eh par\n", numero);
  }
  else
  {
    printf("%u eh impar\n", numero);
  }

  numeroOriginal = numero;

  while (numero != 0)
  {
    remainder = numero % 10;
    soma += remainder;
    numero /= 10;
  }

  printf("A soma dos algarismos de %d eh %d\n", numeroOriginal, soma);

  return 0;
};