#include <stdio.h>
#include <string.h>
int main()
{
  // primeira forma de inicializar
  char string1[10] = {'a', 'b', 'c'};
  // segunda forma de inicializar
  char string2[10] = "def";
  printf("Simples: %s\nComposta: %s\n", string1, string2);
  // scanf não funciona com strings
  char string3[10];
  gets(string3);
  printf("%s\n", string3);

  // utilizar fgets()
  char string4[20];
  printf("Insira uma string para ser lida pelo 'fgets': ");
  fgets(string4, 20, stdin);

  printf("Minha string: %s\n", string4);

  // Manipular uma string
  printf("Tamanho da string4: %d\n", strlen(string4));

  // Copiar uma string para outra
  char string5[30];
  strcpy(string5, string4);
  printf("%s\n", string5);

  // Concatenar string
  strcat(string1, string2);
  printf("%s\n", string1);

  // Comparar string
  char s1[5] = "a";
  char s2[5] = "b";

  if (strcmp(s1, s2) == 0)
  {
    printf("%s eh igual a %s\n", s1, s2);
  }
  else if (strcmp(s1, s2) < 0)
  {
    printf("%s vem antes de %s alfabeticamente\n", s1, s2);
  }
  else if (strcmp(s1, s2) > 0)
  {
    printf("%s vem depois de %s alfabeticamente\n", s1, s2);
  }

  return 0;
}