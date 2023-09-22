#include <stdio.h>

int main()
{
  int colunaInicial = 1;
  double matriz[12][12], soma = 0;
  char operacao;

  scanf("%c", &operacao);
  for (int linha = 0; linha < 12; linha++)
  {
    for (int coluna = 0; coluna < 12; coluna++)
    {
      scanf("%lf\n", &matriz[linha][coluna]);
    }
  }

  for (int linha = 0; linha < 12; linha++)
  {
    for (int coluna = colunaInicial; coluna < 12; coluna++)
    {
      soma = soma + matriz[linha][coluna];
    }
    colunaInicial++;
  }

  switch (operacao)
  {
  case 'S':
    printf("%.1lf\n", soma);
    break;
  case 'M':
    printf("%.1lf\n", soma / 66);
    break;
  default:
    break;
  }

  return 0;
}