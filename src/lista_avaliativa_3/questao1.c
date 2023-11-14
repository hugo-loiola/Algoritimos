#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para converter o número romano para decimal
int romanoParaDecimal(char romano[])
{
  int valores[26];
  valores['I' - 'A'] = 1;
  valores['V' - 'A'] = 5;
  valores['X' - 'A'] = 10;
  valores['L' - 'A'] = 50;
  valores['C' - 'A'] = 100;
  valores['D' - 'A'] = 500;
  valores['M' - 'A'] = 1000;

  int resultado = 0;
  int tamanho = strlen(romano);

  for (int i = 0; i < tamanho; i++)
  {
    int valorAtual = valores[romano[i] - 'A'];
    int valorProximo = (i < tamanho - 1) ? valores[romano[i + 1] - 'A'] : 0;

    if (valorAtual < valorProximo)
    {
      resultado += valorProximo - valorAtual;
      i++;
    }
    else
    {
      resultado += valorAtual;
    }
  }

  return resultado;
}

// Função para converter o número decimal para binário
void decimalParaBinario(int decimal)
{
  if (decimal > 1)
  {
    decimalParaBinario(decimal / 2);
  }
  printf("%d", decimal % 2);
}

int main()
{
  char numeroRomano[13];

  // Receber o número romano como entrada

  scanf("%s", numeroRomano);

  // Calcular a representação decimal
  int decimal = romanoParaDecimal(numeroRomano);

  // Imprimir a representação binária
  printf("%s na base 2: ", numeroRomano);
  decimalParaBinario(decimal);
  printf("\n");

  // Imprimir a representação decimal
  printf("%s na base 10: %d\n", numeroRomano, decimal);

  // Imprimir a representação hexadecimal
  printf("%s na base 16: %X\n", numeroRomano, decimal);

  return 0;
}
