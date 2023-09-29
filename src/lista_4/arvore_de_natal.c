#include <stdio.h>

int main()
{
  int tamanhoArvore, meioArvore;

  while (scanf("%d", &tamanhoArvore) == 1)
  {

    meioArvore = tamanhoArvore / 2;
    int numLinhas = meioArvore + 1;
    int numAsteriscos = 1;
    int numEspacos = meioArvore;
    // Imprimir as Folhas da arvore
    for (int linhaArvore = 0; linhaArvore < numLinhas; linhaArvore++)
    {
      // Imprimir os espaços de cada linha
      for (int espacosImpressos = 0; espacosImpressos < numEspacos; espacosImpressos++)
      {
        printf(" ");
      }
      // Imprimir os asteriscos de cada linha
      for (int asteriscos = 0; asteriscos < numAsteriscos; asteriscos++)
      {
        printf("*");
      }
      printf("\n");
      numAsteriscos = numAsteriscos + 2;
      numEspacos--;
    }

    // Tronco da arvore
    for (int i = 0; i < meioArvore; i++)
    {
      printf(" ");
    }
    printf("*\n");
    // Base da arvore
    for (int i = 0; i < meioArvore - 1; i++)
    {
      printf(" ");
    }
    printf("***\n\n");
  }
  return 0;
}