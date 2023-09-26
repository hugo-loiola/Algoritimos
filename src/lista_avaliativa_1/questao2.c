#include <stdio.h>

int main()
{
  int numero, numeroOriginal, remainder, soma = 0;

  scanf("%d", &numero);

  if (numero % 2 == 0)
  {
    printf("%d eh par\n", numero);
  }
  else
  {
    printf("%d eh impar\n", numero);
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