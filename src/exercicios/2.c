#include <stdio.h>

typedef struct aluno
{
  char nome[50];
  int matricula;
  float nota1;
  float nota2;
  float nota3;
} Aluno;

int main()
{
  Aluno hugo;
  printf("Tamanho aluno: %d", sizeof(hugo));
  return 0;
}