#include <stdio.h>

int main()
{
  int nota1, nota2, nota3, media;

  printf("Digite 3 Notas:\n");

  printf("Nota 1: ");
  scanf("%d", &nota1);

  printf("Nota 2: ");
  scanf("%d", &nota2);

  printf("Nota 3: ");
  scanf("%d", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  if (media == 8 || media == 9)
  {
    printf("Bonus de Nota + 1\n");
    media++;
  }
  if (media < 7)
  { // comparar a media com 7
    printf("Aluno Reprovado!\n");
  }
  else if (media >= 8)
  { // se for maior que 8 espetacular
    printf("Aluno Espetacular!\n");
  }
  else
  { // se for maior que 7, aprovado
    printf("Aluno Aprovado!\n");
  }

  printf("Media: %d\n", media);

  return 0;
};