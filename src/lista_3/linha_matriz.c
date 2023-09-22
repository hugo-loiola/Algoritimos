#include <stdio.h>

int main()
{
  int linhaMatriz;
  char operacao;
  double matriz[12][12], soma = 0;
  // linha da matriz
  scanf("%d", &linhaMatriz);
  // S para soma M para media
  scanf(" %c", &operacao);
  // Preenche os 144 valores da matriz
  for (int linha = 0; linha < 12; linha++)
  {
    for (int coluna = 0; coluna < 12; coluna++)
    {
      scanf("%lf\n", &matriz[linha][coluna]);
    }
  }
  // soma todos os valores da linha selecionada
  for (int coluna = 0; coluna < 12; coluna++)
  {
    soma = soma + matriz[linhaMatriz][coluna];
  }
  // escolhe a operação
  if (operacao == 'S')
  {
    printf("%.1lf\n", soma);
  }
  else if (operacao == 'M')
  {
    printf("%.1lf\n", soma / 12);
  }

  return 0;
}