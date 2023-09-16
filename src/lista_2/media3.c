#include <stdio.h>

int main()
{

  float N1, N2, N3, N4, exame, media;
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

  media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

  printf("Media: %.1f\n", media);

  if (media >= 7.0)
  {
    printf("Aluno aprovado.");
  }
  else if (media >= 6.9 || media <= 5.0)
  {
    printf("Aluno em exame.");
  }
  else
  {
    printf("Aluno reprovado.");
  }

  return 0;
}