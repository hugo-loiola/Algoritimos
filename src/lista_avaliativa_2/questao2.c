#include <stdio.h>
#include <string.h>

typedef struct jogador
{
  char nome[31];
  char posicao;
  int forca;
} Jogador;

typedef struct time
{
  char nome[31];
  int numGoleiros;
  int numLaterais;
  int numZagueiros;
  int numVolantes;
  int numMeias;
  int numAtacantes;
  double forcaPonderada;

} Time;

int main()
{
  Time time1, time2;
  Jogador jogadores[22];

  // Leitura do nome dos times
  fgets(time1.nome, 31, stdin);
  time1.nome[strcspn(time1.nome, "\n")] = '\0';

  return 0;
}