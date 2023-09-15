#include <stdio.h>

int main()
{
  int valor;
  scanf("%d", &valor); // Pedir o valor

  printf("%d\n", valor); // Mostrar o valor pedido

  int notas[7] = {100, 50, 20, 10, 5, 2, 1}; // Array das cédulas

  for (int i = 0; i < 7; i++) // Loop para refatorar as cédulas
  {
    int quantidadeNotas = valor / notas[i];                        // Divide o valor inserido pelo o valor da cédula
    printf("%d nota(s) de R$ %d,00\n", quantidadeNotas, notas[i]); // Mostrar quantas cédulas imprimir
    valor %= notas[i];                                             // Atualiza o valor com o resto da divisão
  }

  return 0;
}
