#include <stdio.h>

typedef struct aluno
{
  char nome[20];
  int matricula;
  float nota1, nota2, nota3;
} Aluno;

int main()
{
  Aluno hugo;
  printf("Tamanho aluno: %d", sizeof(hugo));
  return 0;
}