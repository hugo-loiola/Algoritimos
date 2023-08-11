#include <stdio.h>

int main(void)
{
  int nota1;
  int nota2;
  int nota3;
  int media;

  printf("Digite 3 Notas:\n");

  printf("Nota 1: ");
  scanf("%d", &nota1);

  printf("Nota 2: ");
  scanf("%d", &nota2);

  printf("Nota 3: ");
  scanf("%d", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("Media: %d\n", media);

  if (media < 7)
  { // comparar a media com 7
    printf("Aluno Reprovado!\n");
  }
  else
  { // se for maior que 7, aprovado
    printf("Aluno Aprovado!\n");
  }
};