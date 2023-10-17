#include <stdio.h>

typedef struct aluno
{
  char nome[50];
  int matricula;
  float nota1, nota2, nota3;
  char endereco[50];
} Aluno;

int main()
{
  Aluno aluno1;

  printf("Coloque as info do aluno\n");
  printf("Nome: ");
  fgets(aluno1.nome, 50, stdin);
  fflush(stdin);

  printf("Matricula: ");
  scanf("%d", &aluno1.matricula);

  printf("Notas:\n");
  scanf("%f %f %f", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

  printf("Info do aluno:\n");
  printf("Nome: %sMatricula: %d\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", aluno1.nome, aluno1.matricula, aluno1.nota1, aluno1.nota2, aluno1.nota3);

  return 0;
}