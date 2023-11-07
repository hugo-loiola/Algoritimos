#include <stdio.h>
#include <string.h>

// Criar a classe Jogador
typedef struct jogador
{
  char nome[31];
  char posicao;
  int forca;
} Jogador;

int main()
{
  Jogador time[11];
  float forcaTotal[2] = {0.0, 0.0};
  char nomeTime[2][31];
  int times = 0;

  while (times < 2)
  {
    scanf(" %30[^\n]", nomeTime[times]);
    // Tirar o espaço vazio do nome do time
    nomeTime[times][strcspn(nomeTime[times], "\n")] = '\0';

    for (int jogador = 0; jogador < 11; jogador++)
    {
      // Receber o nome, posicao e força do jogador separado por ponto virgula
      scanf(" %30[^;]; %c; %d", time[jogador].nome, &time[jogador].posicao, &time[jogador].forca);
    }

    for (int jogador = 0; jogador < 11; jogador++)
    {
      if (time[jogador].posicao == 'G')
      {
        forcaTotal[times] = forcaTotal[times] + 8 * time[jogador].forca;
      }
      else if (time[jogador].posicao == 'L')
      {
        forcaTotal[times] = forcaTotal[times] + 10 * time[jogador].forca;
      }
      else if (time[jogador].posicao == 'Z')
      {
        forcaTotal[times] = forcaTotal[times] + 5 * time[jogador].forca;
      }
      else if (time[jogador].posicao == 'V')
      {
        forcaTotal[times] = forcaTotal[times] + 8 * time[jogador].forca;
      }
      else if (time[jogador].posicao == 'M')
      {
        forcaTotal[times] = forcaTotal[times] + 11 * time[jogador].forca;
      }
      else if (time[jogador].posicao == 'A')
      {
        forcaTotal[times] = forcaTotal[times] + 12 * time[jogador].forca;
      }
    }

    forcaTotal[times] = forcaTotal[times] / 100.0;
    times++;
  }

  printf("%s: %.2f de forca\n", nomeTime[0], forcaTotal[0]);
  printf("%s: %.2f de forca\n", nomeTime[1], forcaTotal[1]);

  if (forcaTotal[0] > forcaTotal[1])
  {
    printf("%s eh mais forte\n", nomeTime[0]);
  }
  else
  {
    printf("%s eh mais forte\n", nomeTime[1]);
  }

  return 0;
}