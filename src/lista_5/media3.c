#include <stdio.h>

int main()
{
  float notas[4], peso[4] = {2, 3, 4, 1}, soma = 0;
  // Ler as notas
  for (int i = 0; i < 4; i++)
  {
    scanf("%f", &notas[i]);
  }
  // Somar e usar o peso das notas
  for (int i = 0; i < 4; i++)
  {
    soma += notas[i] * peso[i];
  }

  float mediaInicial = soma / 10;

  printf("Media: %.1f\n", mediaInicial);

  if (mediaInicial < 5)
  {
    printf("Aluno reprovado.\n");
  }
  else if (mediaInicial >= 7)
  {
    printf("Aluno aprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");
    float notaExame;
    scanf("%f", &notaExame);
    printf("Nota do exame: %.1f\n", notaExame);

    float mediaFinal = (notaExame + mediaInicial) / 2;
    if (mediaFinal >= 5)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", mediaFinal);
  }

  return 0;
}