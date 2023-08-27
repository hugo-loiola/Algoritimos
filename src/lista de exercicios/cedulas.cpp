#include <stdio.h>

int main()
{
  int valor;
  scanf("%d", &valor);

  printf("%d\n", valor);

  int notas[7] = {100, 50, 20, 10, 5, 2, 1}; // Cédulas

  for (int i = 0; i < 7; i++)
  {
    int quantidadeNotas = valor / notas[i];
    printf("%d nota(s) de R$ %d,00\n", quantidadeNotas, notas[i]);
    valor %= notas[i]; // Atualiza o valor com o resto da divisão
  }

  return 0;
}
