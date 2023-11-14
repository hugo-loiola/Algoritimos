#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro
{
  char nome[20];
  int idade;
  char endereco[40];
} Cadastro;

Cadastro *criarListaDeCadastro(int n)
{
  Cadastro *cadastros = (Cadastro *)malloc(n * sizeof(Cadastro));
  // Preencher a Lista de cadastros
  for (int i = 0; i < n; i++)
  {
    printf("Nome: ");
    scanf("%s", cadastros[i].nome);
    printf("Idade: ");
    scanf("%d", &cadastros[i].idade);
    printf("Endereco: ");
    scanf("%s", cadastros[i].endereco);
  }

  return cadastros;
}

int main()
{
  int n;
  scanf("%d", &n);

  Cadastro *cadastros = criarListaDeCadastro(n);
  printf("\n");
  printf("Lista de cadastro:\n");
  for (int i = 0; i < n; i++)
  {
    printf("Nome: %s\n", cadastros[i].nome);
    printf("Idade: %d\n", cadastros[i].idade);
    printf("Endereco: %s\n", cadastros[i].endereco);
  }

  return 0;
}