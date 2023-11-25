#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validar_placa(char *placa)
{
  int i;

  // Verificar se a placa está no formato correto
  if (strlen(placa) == 7 || strlen(placa) == 8)
  {
    for (i = 0; i < 3; i++)
    {
      if (!isalpha(placa[i]))
        return 0;
    }

    if (placa[3] != '-' && placa[3] != '\0')
      return 0;

    for (i = 4; i < strlen(placa); i++)
    {
      if (!isdigit(placa[i]))
        return 0;
    }

    return 1;
  }

  return 0;
}

int main()
{
  char placa[9];
  char dia_semana[20];

  // Ler a entrada
  fgets(placa, sizeof(placa), stdin);
  placa[strcspn(placa, "\n")] = '\0'; // Remover o caractere de nova linha

  fgets(dia_semana, sizeof(dia_semana), stdin);
  dia_semana[strcspn(dia_semana, "\n")] = '\0'; // Remover o caractere de nova linha

  // Verificar a validade da placa
  if (!validar_placa(placa))
  {
    printf("Placa invalida\n");
    return 0;
  }

  // Converter a string do dia da semana para maiúsculas
  for (int i = 0; i < strlen(dia_semana); i++)
  {
    dia_semana[i] = toupper(dia_semana[i]);
  }

  // Verificar o dia da semana
  if (strcmp(dia_semana, "SEGUNDA-FEIRA") == 0)
  {
    if (placa[6] == '0' || placa[6] == '1')
    {
      printf("%s nao pode circular segunda-feira\n", placa);
    }
    else
    {
      printf("%s pode circular segunda-feira\n", placa);
    }
  }
  else if (strcmp(dia_semana, "TERCA-FEIRA") == 0)
  {
    if (placa[6] == '2' || placa[6] == '3')
    {
      printf("%s nao pode circular terca-feira\n", placa);
    }
    else
    {
      printf("%s pode circular terca-feira\n", placa);
    }
  }
  else if (strcmp(dia_semana, "QUARTA-FEIRA") == 0)
  {
    if (placa[6] == '4' || placa[6] == '5')
    {
      printf("%s nao pode circular quarta-feira\n", placa);
    }
    else
    {
      printf("%s pode circular quarta-feira\n", placa);
    }
  }
  else if (strcmp(dia_semana, "QUINTA-FEIRA") == 0)
  {
    if (placa[6] == '6' || placa[6] == '7')
    {
      printf("%s nao pode circular quinta-feira\n", placa);
    }
    else
    {
      printf("%s pode circular quinta-feira\n", placa);
    }
  }
  else if (strcmp(dia_semana, "SEXTA-FEIRA") == 0)
  {
    if (placa[6] == '8' || placa[6] == '9')
    {
      printf("%s nao pode circular sexta-feira\n", placa);
    }
    else
    {
      printf("%s pode circular sexta-feira\n", placa);
    }
  }
  else if (strcmp(dia_semana, "SABADO") == 0 || strcmp(dia_semana, "DOMINGO") == 0)
  {
    printf("Nao ha proibicao no fim de semana\n");
  }
  else
  {
    printf("Dia da semana invalido\n");
  }

  return 0;
}
