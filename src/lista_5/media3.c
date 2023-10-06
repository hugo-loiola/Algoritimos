#include <stdio.h>

int main()
{
  float notas[4], peso[4], soma = 0;
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

  float media = soma / 10;

  printf("Media: %.2f\n", media);

  if (media < 5)
  {
    printf("Aluno reprovado\n");
  }
  else if (media >= 7)
  {
    printf("Aluno aprovado\n");
  }
  else
  {
    printf("Aluno de recuperacao");
  }

  return 0;
}