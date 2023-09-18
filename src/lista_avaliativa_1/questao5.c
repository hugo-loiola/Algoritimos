#include <stdio.h>

int main()
{
  unsigned int A, B;
  scanf("%u", &A);
  scanf("%u", &B);

  if (A == B)
  {
    printf("Os valores lidos sao iguais\n");
  }
  // Se o primeiro numero for Maior que o segundo entra aqui
  else if (A > B)
  {
    printf("%u eh maior que %u\n", A, B);
    // Checar se é multiplo
    if (A % B == 0)
    {
      printf("%u eh multiplo de %u\n", A, B);
    }
    else
    {
      printf("%u nao eh multiplo de %u\n", A, B);
    }
  }
  // Se o segundo numero for Maior que o primeiro entra aqui
  else if (A < B)
  {
    printf("%u eh maior que %u\n", B, A);
    // Checar se é multiplo
    if (B % A == 0)
    {
      printf("%u eh multiplo de %u\n", B, A);
    }
    else
    {
      printf("%u nao eh multiplo de %u\n", B, A);
    }
  }

  return 0;
}